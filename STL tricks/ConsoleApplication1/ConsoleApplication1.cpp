// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>


using namespace std;


bool f(int x , int y) { // declared the functions that sets the order of the A vector
	return x > y;
};

void vectorDeomo() {

	// initial vector = 11,2,3,14
	vector<int> A = { 11,2,3,14 };

	sort(A.begin(), A.end()); // sort form the beginin till the end
	//vector after order sorted 
	// vector = 2,3,12,14

	bool present = binary_search(A.begin(), A.end(), 3);
	present = binary_search(A.begin(), A.end(), 5);
	// check if values are present

	A.push_back(100);
	// adds to the vector 

	present = binary_search(A.begin(), A.end(), 100);
	// checks if 100 was added
	// vector = 2,3,12,14,100

	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	// vector no is 2,3,12,14,100,100,100,100,100
	A.push_back(123);

	vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100);
	//you  can also say AUTO IT
	//checks for same elements but gets the first one or the lower one
	vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100);
	//you  can also say AUTO IT2
	// checks for same elements but gets the last one or the higher one

	cout << *it << " " << *it2 << endl;
	cout << it2 - it << endl;


	sort(A.begin(), A.end(), f);
	// defininf if its going to be sorted or unsorted ith afunction


	for (int& x : A) { // by refrence 
		x++;
	}
	cout << endl;
	//printing a vector with a for loop 


	for (int x : A) {
		cout << x << " ";
	}
	cout << endl;
	//printing a vector with a for loop 

};

void setDemo() {

	set<int> S;
	S.insert(1);
	S.insert(2);
	S.insert(-1);
	S.insert(-10);

	for ( int x : S)
	{
		cout << x << " ";
		cout << endl;
	}
	//set i
	auto it = S.find(-1);
	if (it == S.end()) {
		cout << "element not present\n";
	} 
	else
	{
		cout<< " it is present\n" <<endl;
		cout<< *it << endl;
	}

	auto it2 = S.upper_bound(-1);
	auto it3 = S.upper_bound(0);
	cout << *it2 << " " << *it3 << endl;

	auto it4 = S.upper_bound(2);
	if (it == S.end()) {
		cout << "Opps sorry\n";
	}
};

void mapDemo() {
	map<int, int> A;
	A[1] = 100;
	A[2] = -1;
	A[3] = 200;
	A[1000000344] = 1;

	map<char, int> cnt;
	string x = "Rachit jan";
	for (char c : x) {
		cnt[c]++;
	};
	cout << cnt['a'] << " " << cnt['z'] << endl;
};

void PowerOfStl() {
	// [x,y]
	/*add[2, 3]
	add[10, 20]
	add[30, 400]
	add[401, 450]
	add[10, 20]
	give me the interval 401
	*/
	
	set< pair<int, int> > S;
	S.insert({ 2, 3 });
	S.insert({ 10, 20 });
	S.insert({ 30, 400 });
	S.insert({ 401, 3450 });

	int point = 0;
	auto it = S.upper_bound({ point, INT_MAX });
	if (it == S.begin())
	{
		cout << " the given point is out of hte lying in the interval..\n";
		return;
	}

	it--;
	pair<int, int> current = *it;
	if (current.first <= point && point <= current.second)
	{
		cout << "yes it is present " << current.first << " " << current.second << endl;
	}
	else
	{
		cout << " the given point is out of hte lying in the interval..\n";
	}
		

};

int main()
{
	// C++ STL nice tricks


	PowerOfStl();










	






    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

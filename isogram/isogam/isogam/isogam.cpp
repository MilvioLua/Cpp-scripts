
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check 
// if a given string is isogram or not

string is_isogram(string str)
{
	int len = str.length();

	// Convert the string in lower case letters 
	for (int i = 0; i < len; i++)
		str[i] = tolower(str[i]);

	sort(str.begin(), str.end());

	for (int i = 0; i < len; i++) {
		if (str[i] == str[i + 1])
			return "Not a isogram";
	}
	return "It is a isogram";
}

// driver program 
int main()
{
	string word_one;
	string word_two;
	string word_three;
	string word_four;
	cout << " check first word: ";
	cin >> word_one;
	cout << " check second word: ";
	cin >> word_two;
	cout << " check third word: ";
	cin >> word_three;
	cout << " check four word: ";
	cin >> word_four;

	cout << word_one << " " << is_isogram(word_one) << endl;
	cout << word_two << " "  << is_isogram(word_two) << endl;
	cout << word_three << " "  << is_isogram(word_three) << endl;
	cout << word_four << " " << is_isogram(word_four) << endl;

	return 0;
}
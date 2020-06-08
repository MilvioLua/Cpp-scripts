
#include <iostream>
#include <vector>
#include "math.h"
#include <bits/stdc++.h>
using namespace std;

// Function to check
// if a given string is isogram or not
string is_isogram(string str)
{
	int len = str.length();



	sort(str.begin(), str.end());

	for (int i = 0; i < len; i++) {
		if (str[i] == str[i + 1])
			return "False";
	}
	return "True";
}

// driver program
int main()
{
	string str1 = "Machine";
	cout << is_isogram(str1) << endl;

	string str2 = "isogram";
	cout << is_isogram(str2) << endl;

	string str3 = "GeeksforGeeks";
	cout << is_isogram(str3) << endl;

	string str4 = "Alphabet";
	cout << is_isogram(str4) << endl;

	return 0;
}

// Contributed by nuclode

#include "pch.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <fstream>

using namespace System;
using namespace std;



void printvector(vector<int> vector)
{

	for (int i = 0; i < vector.size(); i++)
	{
		cout << vector[i] << "\t";
	}
	cout << endl;
}


void playGame() {

	vector <int> guesses;
	int count = 0;

	int random = rand() & 251;
	cout << random;
	cout << "Guess a number:";
	while (true)
	{
		int guess;
		cin >> guess;
		count++;
		guesses.push_back(guess);
		

		if (guess == random)
		{
			cout << "you win!\n";
			break;
		}
		else if (guess < random)
		{
			cout << "to low\n";
		}
		else
		{
			cout << "to high\n";
		}
		
	}

	ifstream input("Best_score.txt");
	int bestScore;
	input >> bestScore;

	if (!input.is_open()) {
		cout << " unable to read" << endl;
		return;
	}

	ofstream output("Best_score.txt");

	if (!output.is_open()) {
		cout << " unable to read" << endl;
		return;
	}

	if (count > bestScore)
	{
		output << count;
	}
	else
	{
		output << bestScore;
	}

	printvector(guesses);
}





int main()
{   
	int choice;
	srand(time(NULL));
	do
	{
		cout << "0. quit\n1. Play game\n ";
		int choice;
		cin >> choice;

		switch (choice)
		{
		case 0:
			cout << " thanks for nothin\n";
			return 0;
		case 1:
			playGame();
			break;
		}
	}
	while(choice == 0);

	

	const int SIZE = 10;
	int guesses[SIZE];

	int count = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (cin >> guesses[i])
		{
			count++;
			//input worked
		}
		else
		{
			// invalid characther
			break;
		}
	}


	



	return 0;

}

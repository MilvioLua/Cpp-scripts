#include "pch.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace System;
using namespace std;


void printarray(int array[], int count)
{

	for (int i = 0; i < count; i++)
	{
		cout << array[i] << "\t";
	}
	cout << endl;
}


void playGame() {

	int guesses[250];
	int guessCount = 0;

	int random = rand() & 251;
	cout << random;
	cout << "Guess a number:";
	while (true)
	{
		int guess;
		cin >> guess;
		guesses[guessCount] = guess;
		guessCount++;

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

	printarray(guesses, guessCount);
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

	

	/*const int SIZE = 10;
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

	printarray(guesses, count);
	cin.clear();
	*/




	return 0;

}

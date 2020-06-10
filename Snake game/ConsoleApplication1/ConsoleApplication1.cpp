#include <iostream>
#include <conio.h>
#include < windows.h>

using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;
int tailX[100], tailY[100];
int nTail;
int x, y, fruitX, fruitY, score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir; 

// function to setup the game settings 
void Setup() {
    gameOver = false;
	dir = STOP;
	x = width / 2; //set the snake head position
	y = height / 2;
	fruitX = rand() % width; //lace the fruit in the midle
	fruitY = rand() % height; //lace the fruit in the midle
	score = 0;
}

// function to draw th game on the console
void Draw() {
	system("cls"); 
	for (int i = 0; i < width +2 ; i++) // print top game frame
	{
		cout << "#";
	}
	cout << endl;

	// creat side game frames
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0)
				cout << "#";
			if (i == y && j == x) // prints snake head
				cout << "0";
			else if (i == fruitY && j == fruitX) // prints fruit
				cout << "F";
			else {
				bool print = false;
				for (int k = 0; k < nTail; k++)
				{
					if (tailX[k] == j && tailY[k] == i)
					{
						cout << "o";
						print = true;
					}
				}
				if (!print)
					cout << " ";

				if (j == width - 1)
					cout << "#";
			}
		}
		cout << endl;
	}	

	for (int i = 0; i < width + 2; i++) // prints bottom frames
	{
		cout << "#";
	}
	cout << endl;
	cout << "Score is: " << score << endl;
}

void Input() {
	if (_kbhit())   // check if keyboard was pressed
	{
		switch (_getch()) // get asqui tab and compare input
		{
		case 'a':
			dir = LEFT;
			break;

		case 'd':
			dir = RIGHT;
			break;

		case 's':
			dir = DOWN;
			break;

		case 'w':
			dir = UP;
			break;

		case 'x':
			gameOver = true;
			break;
		}
	}
}

void Logic() {
	int prevX = tailX[0];
	int prevY = tailY[0];
	int prev2x, prev2y;
	tailX[0] = x;
	tailY[0] = y;

	// tail foolow
	for (int i = 1; i < nTail; i++)
	{
		prev2x = tailX[i];
		prev2y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;;
		prevX = prev2x;
		prevY = prev2y;
	}

	switch (dir) // switch direction 
	{
	case LEFT:
		x--;
		break;
	case RIGHT:
		x++;
		break;
	case UP:
		y--;
		break;
	case DOWN:
		y++;
		break;
	default:
		break;
	}

	// ends the game if snake hits the wall
	//if (x > width || x < 0 || y > height || y < 0) 
	//	gameOver = true;

	// makes the snake go through the wall
	if (x >= width) x = 0; else if (x < 0) x = width - 1;
	if (y >= width) y = 0; else if (y < 0) x = height - 1;

	// stop game if you eat your self
	for (int i = 0; i < nTail; i++)
		if (tailX[i] == x && y == tailY[i])
			gameOver = true;

	// add score if snake eats fruit
	if (x == fruitX && y == fruitY)
	{	
		score += 10;
		fruitX = rand() % width; // place the fruit somewhere else
		fruitY = rand() % height;
		nTail++;
	}
}

int main()
{
    Setup();
	while (!gameOver)
	{
		Draw();
		Input();
		Logic();
		Sleep(10); // speed game
	}
}
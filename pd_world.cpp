// pd_world.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
struct boardOptions
{
	char boardType;
	int pickUp = 0;
	int dropOff = 0;
};

class MyClass
{
public:
	MyClass();
	~MyClass();

private:
	boardOptions pdWorld[5][5];
	int agentValue = 0;
};

//p spots (0,0),(2,2),(4,4)
//d spots (4,0),(4,2),(1,4)
MyClass::MyClass()
{
	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < 5; j++)
		{
			if ((i == 0 && j == 0) || (i == 2 && j == 2) || (i == 4 && j == 4))
			{
				pdWorld[i][j].boardType = 'p';
				pdWorld[i][j].pickUp = 5;
			}
			else if ((i == 4 && j == 0) || (i == 4 && j == 2) || (i == 1 && j == 4))
			{
				pdWorld[i][j].boardType = 'd';
			}
			else
			{
				pdWorld[i][j].boardType = 'b';
			}

			cout << pdWorld[i][j].boardType << " ";
		}

		cout << endl;
	}

}

MyClass::~MyClass()
{
}


int main()
{
	MyClass hey;
    
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

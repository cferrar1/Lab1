// cosc2030_lab1_ferrarini.cpp
// Reads in a file of integers, stores the amount of integers and the first and last 2.
// 

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{
	string fileName;
	ifstream readFile;
	double x;
	double first1 = 0;
	double first2 = 0;
	double last1 = 0; //Just did this so it compiles
	double last2 = 0;
	double size = 0;

	cout << "Please enter your file name: ";
	cin >> fileName;
	// Open File
	readFile.open(fileName);

	// Read File # by #, ignoring whitespace
	// Stores the first and last 2 numbers
	if (readFile.is_open())
	{
		readFile >> x;
		while (!readFile.fail())
		{
			size++;
			if (size == 1) //Checks to see if this is the first number
			{
				first1 = x;
			}
			else if (size == 2) // Checks to see if this is the second number
			{
				first2 = x;
			}
			last2 = last1; //Moves the previous last number to the second-to-last number
			last1 = x; //Stores the current number as the last number
			readFile >> x;
		}


		// Report size and values, close readFile
		readFile.close();
		cout << "There were " << size << " numbers, the first two were " << first1 << " and " << first2 << ". The last two values were " << last2 << " and " << last1 << ". \n";
	}
	else
	{
		cout << "The file could not be opened. \n";
	}
}


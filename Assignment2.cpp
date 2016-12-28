/***************************************************************************
* File: Assignment2.cpp
* Author: Adam Pierce Matthews
* Function: Solves the quadratic formula
* Input: The coeffecients
* Output: The calculated quadratic formula
*
*
* Copyright (C) 2016 by
***************************************************************************/
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//Declaring variables.
double a = 0;
double b = 0;
double c = 0;
string str = "z";

//This is used to calculate the square root
double sqrt(double num)
{
	double root = num / 3, last, diff = 1;
	if (num <= 0) return 0;
	do {
		last = root;
		root = (root + num / root) / 2;
		diff = root - last;
	} while (diff > 2.25e-308 || diff < -2.25e-308);
	return root;
}

//Takes in the solutions from the solver and prints them.
void printSolutions(double posSoln, double negSoln, double i, bool imaginary)
{
	if (imaginary == true)
	{
		cout << "The solutions to your equation are: " << posSoln << " + " << i << "i" << " and " << negSoln << "-" << i << "i" << " \n";
	}
	else
		cout << "The solutions to your equation are: " << posSoln << " and " << negSoln << " \n";
}

//The solver. Calculates posSoln for the positive solution and negSoln for the negative solution.
void solveQuadratic(double a, double b, double c)
{
	double i = 0;
	bool imaginary = false;
	double posSoln = (b*b) - (4*a*c);
	if (posSoln < 0)
	{
		imaginary = true;
		i = sqrt(posSoln);
		i = i / (2 * a);
		cout << i;
		posSoln = (-1 * b) / (2 * a);
		printSolutions(posSoln, posSoln, i, imaginary);
	}
	posSoln = sqrt(posSoln);
	posSoln = (-1*b) + posSoln;
	posSoln = posSoln / (2*a);

	double negSoln = (b*b) - (4*a*c);
	negSoln = sqrt(negSoln);
	negSoln = (-1*b) - negSoln;
	negSoln = negSoln / (2*a);

	str = "z";
	printSolutions(posSoln, negSoln, i, imaginary);
}

//Gets the coefficients from the user.
void getCoefficients()
{
	cout << "Please Enter the A value: \n";
	cin >> a;
	cout << "Please Enter the B value: \n";
	cin >> b;
	cout << "Please Enter the C value: \n";
	cin >> c;
	solveQuadratic(a, b, c);
}

//The main function.
int main(int argc, char** argv)
{	
	//Welcome text and loop
	cout << "Welcome to Quadratic Solver! \n";
	cout << "Enter S to solve and equation, or Q to quit. \n";
	cin >> str; //gets the first user selection
	while (str != "q" && str != "Q") 
	{
		if (str == "s" || str == "S") //if the selection is a S, case-insensitive, the equation is solved.
		{
			getCoefficients();
			cout << "Enter S to solve another or Q to quit. \n"; //asks the user whether to solve another or to quit.
			cin >> str;
		}
		else //if the input is anything other than s or q, ask the user to input again.
		{
			cout << "Please enter either S to solve and equation, or Q to quit \n";
			cin >> str;
		}
	}
    return 0;
}
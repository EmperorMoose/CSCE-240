/***************************************************************************
* File: Assignment3.cpp
* Author: Adam Pierce Matthews
* Function: Performs a bubble sort on integers in a 2 dimensional array.
* Input:
* Output:
*
*
* Copyright (C) 2016 by
***************************************************************************/

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

const int COL(20);


void ReadData(int rows, string data)
{
	int** ary = new int*[rows];
	for (int i = 0; i < rows; ++i)
		ary[i] = new int[COL];
	
	for (int i = 0; i < rows; i++)
		for (int i = 0; i < COL; i++)
		{
			//split the string and store in ReadData
		}

	for (int ia = 0; ia <4; ia++)
		for (int ja = 0; ja <4; ja++)
			for (int ib = 0; ib <4; ib++)
				for (int jb = 0; jb <4; jb++)
					if (ary[ia][ib]<ary[ja][jb])
					{
						int temp = ary[ia][ib];
						ary[ia][ib] = ary[ja][jb];
						ary[ja][jb] = temp;
					}
}

void SortData(int rows, string data)
{
	for (int ia = 0; ia <4; ia++)
		for (int ja = 0; ja <4; ja++)
			for (int ib = 0; ib <4; ib++)
				for (int jb = 0; jb <4; jb++)
					if (*ary[ia][ib]<*ary[ja][jb])
					{
						int temp = x[ia][ib];
						x[ia][ib] = x[ja][jb];
						x[ja][jb] = temp;
					}
}

int main(int argc, char **argv)
{
	string data;
	cin >> data;
	int rows;
	cout << "How many rows are there?" << endl;
	cin >> rows;

	ReadData(rows, data);
	cout << "Before Sorting" << endl;
	PrintData(rows, data);
	SortData(rows, data);
	cout << "After Sorting" << endl;
	PrintData(rows, data);

	return 0;
}
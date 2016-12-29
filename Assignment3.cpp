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

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

const int COL(20);
int** arr;

//Prints the data
void PrintData(int rows, int **data)
{
	int k = 0;
	for (int i = 0; i < rows; i++)
		for (int y = 0; y < COL; y++)
		{
			cout << data[i][y] << " ";
		}
}

//This splits the string into a vector
vector<string> split(string str)
{
	char delim = ' ';
	vector<string> internal;
	stringstream ss(str);
	string num;

	while (getline(ss, num, delim))
	{
		internal.push_back(num);
	}

	return internal;
}

//Reads in data from the file
void ReadData(int rows, vector<string> num)
{
	arr = new int*[rows];
	for (size_t i = 0; i < rows; ++i)
	{
		arr[i] = new int[COL];
	}

	int k = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int y = 0; y < COL; y++)
		{
			arr[i][y] = stoi(num[k]);
			k++;
		}
	}
	cout << "Before Sorting";
	cout << "\n";
	PrintData(rows, arr);
}

//Performs the sort
void SortData(int rows, int **data)
{
	for (int ia = 0; ia < rows; ia++)
		for (int ja = 0; ja < rows; ja++)
			for (int ib = 0; ib < COL; ib++)
				for (int jb = 0; jb < COL; jb++)
					if (data[ia][ib] < data[ja][jb])
					{

						int temp = data[ia][ib];
						data[ia][ib] = data[ja][jb];
						data[ja][jb] = temp;
					}
}

int main(int argc, char **argv)
{
	string data;
	cin >> data;
	vector<string> num = split(data);
	int rows;
	cout << "How many rows are there?" << endl;
	cin >> rows;
	ReadData(rows, num);
	cout << "\n" << endl;
	cout << "After Sorting" << endl;
	SortData(rows, arr);
	PrintData(rows, arr);

	return 0;
}

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
#include <vector>
#include <sstream>

using namespace std;

const int COL(20);

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
	int** arr = new int*[rows];
	for (size_t i = 0; i < rows; ++i)
	{
		arr[i] = new int[20];
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
	PrintData(rows, arr[][20]);
}

//Performs the sort
void SortData(int rows, int data[][COL])
{
	for (int ia = 0; ia <4; ia++)
		for (int ja = 0; ja <4; ja++)
			for (int ib = 0; ib <4; ib++)
				for (int jb = 0; jb <4; jb++)
					if (data[ia][ib]<data[ja][jb])
					{
						int temp = data[ia][ib];
						data[ia][ib] = data[ja][jb];
						data[ja][jb] = temp;
					}

	int k = 0;
	for (int i = 0; i < rows; i++)
		for (int y = 0; y < COL; y++)
		{
			cout << data[i][y] << " ";
		}
}

//Prints the data
void PrintData(int rows, int data[][COL])
{
	int k = 0;
	for (int i = 0; i < rows; i++)
		for (int y = 0; y < COL; y++)
		{
			cout << data[i][y] << " ";
		}
}

int main(int argc, char **argv)
{
	string data;
	//cin >> data;
	data = "7 64 73 58 87 72 62 78 47 110 34 107 119 17 75 103 26 71 10 92 189 29 9 55 63 171 163 0 59 82 97 141 112 35 40 114 179 149 164 169 146 5 57 136 174 145 127 184 194 23 49 88 69 65 154 90 124 143 4 20 120 66 37 76 50 74 177 123 46 79 98 138 182 42 6 187 160 43 133 198 115 94 132 101 117 14 105 130 153 156 188 8 86 135 131 81 186 100 151 53 83 139 181 54 22 12 161 197 152 30 109 99 104 126 41 13 142 199 168 51 122 1 48 121 44 118 159 3 144 162 96 11 93 108 56 192 166 45 173 183 190 111 102 196 113 140 167 38 39 128 176 80 84 19 68 157 70 24 158 106 33 61 2 150 89 52 125 85 191 18 31 60 170 16 134 32 172 175 155 25 185 129 67 137 91 180 116 195 178 95 28 15 148 36 27 21 193 165 147 77";
	vector<string> num = split(data);
	int rows;
	cout << "How many rows are there?" << endl;
	cin >> rows;
	ReadData(rows, num);
	cout << "Before Sorting" << endl;
	//PrintData(rows, num);
	cout << "After Sorting" << endl;
	//SortData(rows, num);
	//PrintData(rows, num);

	return 0;
}

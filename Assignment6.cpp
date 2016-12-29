/***************************************************************************
* File: Assignment6.cpp
* Author: Pierce Matthews
* Function: Overloaded string class
* Input:
* Output:
***************************************************************************/

#include "stdafx.h"
#include "String.h"
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>
#include <string.h>
#include <cstring>

using namespace std;

class MyString
{
private:

	const int max_length = 256;
	int _length;
	char data[256];

	//Gets the size of the passed array
	int getCharArraySize(char arr[])
	{
		int len = strlen(arr) / sizeof(char);
		return len;
	}

public:

	//default constructor
	MyString()
	{
		//Assign data to null;
		data[256] = { '\0' };
	}

	//Copy Constructor
	MyString(string obj)
	{
		string ptr;
		ptr = obj;
	}

	//destructor
	~MyString()
	{
		//Wat do
	}
	//alternate constructor that initializes a string object and sets its char[] to str and update the length variable to be the lenght of str
	MyString(char str[])
	{
		int len = strlen(str) / sizeof(char);
		memcpy(&data, &str, len);
	}

	//Returns the length of data[]
	int length()
	{
		int len = sizeof(data) / sizeof(char);
		return len;
	}

	//Clears data[]
	void clear()
	{
		for (int i = 0; i < sizeof(data); i++)
		{
			data[i] = '\0';
		}
	}

	//checks to see if char[] is empty or not
	bool empty()
	{
		bool empty = false;
		if (data[0] == '\0')
			empty = true;
		return empty;
	}

	//returns the character at the position index
	char operator[](int index)
	{
		char x = data[index];
		return x;
	}

	//finds a substring in data
	int find(char substr[], int startIndex)
	{
		int subLen = strlen(substr) / sizeof(char);
		int len = sizeof(data) / sizeof(char);
		for (int i = startIndex; i < len; i++)
		{
			if ((data[i] == substr[0]) && (data[i + (subLen - 1)] == substr[subLen]))
				return i;
		}
	}

	//Compares two strings and determines if they are equal
	bool operator==(string &two)
	{
		int len = sizeof(data) / sizeof(char);
		string t = two;
		for (int i = 0; i < len; i++)
		{
			if (t[i] != data[i])
				return false;
		}
		return true;
	}

	//concatenates two onto this object
	bool operator+(string &two)
	{
		int len = sizeof(data) / sizeof(char);
		string t = two;
		int strLen = t.length();
		for (int i = 0; i <= strLen; i++)
		{
			data[i] = t[i];
		}
		return true;
	}

	//Assignment operator
	void operator=(string& two)
	{
		*this = two;
	}
	//prints the string to stdout
	void operator<<(string x)
	{
		for (int i = 0; i < x.length(); i++)
		{
			cout << x[i];
		}
	}

	//prints the string to stdout
	void print()
	{
		cout << this;
	}
};

using namespace std;

int main(int argc, char **argv)
{
	char test[256] = "Hello world";
	MyString one(test);
	cout << "The value of String one is: ";
	one.print();
	char test2[256] = "wor";
	cout << "wor is located at index " << one.find(test2, 0) << endl;

	return 0;
}


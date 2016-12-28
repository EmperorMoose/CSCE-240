/***************************************************************************
* File: Assignment4.cpp
* Author: Pierce Matthews
* Function: Overloaded string class
* Input:
* Output:                                                                        
***************************************************************************/

#include "stdafx.h"
#include "String.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class String
{
	private:

		const int max_length = 256;
		int _length;
		char data[256];
		
		int getCharArraySize(char arr[])
		{
			//Gets the size of the passed array
		}

	public:

		//default constructor
		String()
		{
			//Assign data to null;
			data[256] = {'\0'};
		}

		//alternate constructor that initializes a string object and sets its char[] to str and update the length variable to be the lenght of str
		String(char str[])
		{
			int len = sizeof(str) / sizeof(char);
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
		char at(int index)
		{
			char x = data[index];
			return x;
		}

		//finds a substring in data
		int find(char substr[], int startIndex)
		{
			int subLen = sizeof(substr) / sizeof(char);
			int len = sizeof(data) / sizeof(char);
			for (int i = startIndex; i < len; i++)
			{
				if ((data[i] == substr[0]) && (data[i + (subLen - 1)] == substr[subLen]))
					return true;
			}
		}

		//Compares two strings and determines if they are equal
		bool equal(String &two)
		{
			int len = sizeof(data) / sizeof(char);
			String t = two;
			for (int i = 0; i < len; i++)
			{
				if (t.at(i) != data[i])
					return false;
			}
			return true;
		}

		//concatenates two onto this object
		bool add(String &two)
		{
			int len = sizeof(data) / sizeof(char);
			String t = two;
			int strLen = t.length;
			for (int i = 0; i <= strLen; i++)
			{
				data[i] = t.at(i);
			}
			return true;
		}

		//prints the string to stdout
		void print()
		{
			int len = sizeof(data) / sizeof(char);
			for (int i = 0; i < len; i++)
				cout << data[i];
		}
};

using namespace std;

int main(int argc, char **argv)
{
	char test[256] = "Hello world";
	String one(test);
	cout << "The value of String one is: ";
	one.print();
	char test2[256] = "wor";
	cout << "wor is located at index " << one.find(test2, 0) << endl;

	return 0;
}

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Gene.h"
#include "Sequence.h"

class Sequence
{
private:
	//Nothing yet

public:
	//The sequence
	string seq;
	//The length of the sequence
	int len;
	//The Array of the characters in the sequence
	char seqA[];

	//Default constuctor sets seq and seqA to be null
	Sequence()
	{
		seq = " ";
		for (int i = 0; i < len; i++)
			seqA[i] = '\0';
	}

	//Constructs a sequence based on str[]
	Sequence(string str)
	{
		seq = str;
		len = seq.length;
		for (int i = 0; i < len; i++)
			seqA[i] = seq.at(i);
	}

	//Copy constructor
	Sequence(Sequence& orig)
	{
		seq = orig.getSeq();
		len = orig.getLength();
		for (int i = 0; i < len; i++)
			seqA[i] = orig.at(i);
	}

	virtual ~Sequence()
	{
		//This is the destructor
	}

	//Sets assigns value to a specific index within seqA
	void setData(int index, char value)
	{
		seqA[index] = value;
	}

	//Returns the length
	int getLength()
	{
		return len;
	}

	//Returns the seq
	string getSeq()
	{
		return seq;
	}

	//Returns the char at the specified index within seqA
	char at(int index)
	{
		return seqA[index];
	}
	Sequence & operator=(const char *str)
	{
		//This overloads the = operator in order to assign sequence to the value pointed to by str
	}

	bool isValid(const char *str)
	{
		//Decides if str is valid?
	}
};

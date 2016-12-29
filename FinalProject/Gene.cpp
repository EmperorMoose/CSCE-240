#include "stdafx.h"
#include <iostream>
#include <string>
#include "Gene.h"
#include "Sequence.h"

class Gene: public Sequence
{
private:

public:
	//The minimum overlap
	int overlap;
	//The sequence
	string seq;
	//The length of the sequence
	int len;
	//The Array of the characters in the sequence
	char seqA[];

	//The default constructor
	Gene()
	{
		overlap = 1;
		seq = " ";
		for (int i = 0; i < len; i++)
			seqA[i] = '\0';
	}

	//parameterized constructor
	Gene(string str, int overlap)
	{
		seq = str;
		overlap = overlap;
		len = seq.length;
		for (int i = 0; i < len; i++)
			seqA[i] = seq.at(i);
	}

	Gene(const Gene& orig)
	{
		seq = orig.getSeq();
		len = orig.getLength();
		for (int i = 0; i < len; i++)
			seqA[i] = orig.at(i);
	}

	virtual ~Gene()
	{
		//This is the deconstructor
	}

	int numSeq(ifstream & in_file)
	{
		//Assembles the number sequence?
	}
};

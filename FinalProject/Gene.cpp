#include "stdafx.h"
#include <iostream>
#include <string>
#include "Gene.h"
#include "Sequence.h"

//The default constructor
Gene::Gene()
{
	bool exists = true;
	overlap = 1;
	//seq = " ";
	for (int i = 0; i < len; i++)
		seqA[i] = '\0';
}

//parameterized constructor
Gene::Gene(string str, int overlap)
{
	bool exists = true;
	seq = str;
	overlap = overlap;
	len = seq.length();
	for (int i = 0; i < len; i++)
		seqA[i] = seq.at(i);
}

//Copy constructor
Gene::Gene(Gene& orig)
{
	bool exists = true;
	seq = orig.getSeq();
	len = orig.getLength();
	for (int i = 0; i < len; i++)
		seqA[i] = orig.at(i);
}

Gene::~Gene()
{
	//This is the deconstructor
}

//Compares two gene objects, then if there is an overlap, it appends them to the sequence
void Gene::compare(Gene cmp, int overlap, Sequence sequence)
{
	//The length of the gene to be compared
	int cmpLen = cmp.getLength();
	//Error check: If the overlap is bigger than the target sequence, make it just under the same size
	if (overlap > cmpLen)
		overlap = cmpLen - 1;
	//Start index is length of the gene minus the overlap
	int startIndex = len - overlap;
	//end index is the last position on the gene
	int endIndex = len;
	int count = 0;
	//Used to store the subsequence
	char *subSeqA;
	int size = endIndex - startIndex;
	subSeqA = new char[256];
	//used to store the subsequence that needs to be appended
	char *subSeqB;
	subSeqB = new char[256];
	//starting at the start index, until the end index, add to subseq the value
	cout << "here3";
	//ERROR this loop is never entered, dont know why
	for (int i = startIndex; i <= endIndex; i++)
	{
		cout << "here2";
		cout << cmp.at(i);
		subSeqA[count] = cmp.at(i);
		count++;
	}

	//Finds the subsequence
	int match = findSub(subSeqA);
	//if there is a match
	if (match != -1)
	{
		//populate an array for the match
		for (int i = 0; i < startIndex; i++)
		{
			subSeqB[i] = cmp.at(i);
		}
		//append
		string newsub(subSeqB);
		sequence.append(subSeqB);
	}

}

//Searches in seqA[] for the subSeqA[]
int Gene::findSub(char subSeqA[])
{
	int pos(-1);
	int subLen = strlen(subSeqA) / sizeof(char);
	int len = sizeof(seqA) / sizeof(char);
	for (int i = 0; i<len - 1; i++)
	{
		if (seqA[i] == subSeqA[0])
		{
			for (int j = 0; j<subLen; j++)
			{
				if (seqA[i + j] != subSeqA[j])
				{
					pos = -1;
					break;
				}
				else
				{
					pos = i;
				}
			}
		}
	}
	return pos;
}

bool Gene::doesExist()
{
	if (exists)
		return true;
	else
		return false;
}

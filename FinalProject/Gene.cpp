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

char Gene::at(int index)
{
	return seqA[index];
}

//parameterized constructor
Gene::Gene(string str, int &overlap)
{
	bool exists = true;
	seq = str;
	overlap = overlap;
	len = str.length();
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
//Searches in seqA[] for the subSeqA[]
int Gene::findSub(char subSeqA[])
{
	//sets the return to false
	int pos(-1);
	//gets the length of the subSeqA
	int subLen = strlen(subSeqA) / sizeof(char);
	//gets the length of the seqA
	int len = sizeof(seqA) / sizeof(char);
	//For all within seqA
	for (int i = 0; i<len - 1; i++)
	{
		//if seqa at this position is equal to subseqA
		if (seqA[i] == subSeqA[0])
		{
			//then for all less than sub length
			for (int j = 0; j<subLen; j++)
			{
				//if seqA + J isnt subseqA[j]
				if (seqA[i + j] != subSeqA[j])
				{
					//break
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

//Compares two gene objects, then if there is an overlap, it appends them to the sequence
void Gene::compare(Gene cmp, int &overlap, Sequence sequence)
{
	//The length of the gene to be compared
	//Error check: If the overlap is bigger than the target sequence, make it just under the same size
	//if (overlap > cmpLen)
	//	overlap = cmpLen - 1;
	//Start index is length of the gene minus the overlap
	int startIndex = len - overlap;
	//end index is the last position on the gene
	int endIndex = len;
	int count = 0;
	//Used to store the subsequence
	char *subSeqA;
	int size = endIndex - startIndex;
	subSeqA = new char[len];
	//used to store the subsequence that needs to be appended
	char *subSeqB;
	subSeqB = new char[len];
	//starting at the start index, until the end index, add to subseq the value
	//ERROR this loop is never entered, dont know why
	for (int i = startIndex; i <= len; i++)
	{
		cout << "//" << cmp.at(i) << "\\";
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

bool Gene::doesExist()
{
	if (exists)
		return true;
	else
		return false;
}


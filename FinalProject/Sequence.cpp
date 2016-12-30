#include "stdafx.h"
#include "Sequence.h"
using namespace std;

//class Sequence
//{
//private:
//Nothing yet

//public:
//friend class Gene;
//The sequence
//string seq;
//The length of the sequence
//int len;
//The Array of the characters in the sequence
//char seqA[256];

//Default constuctor sets seq and seqA to be null
Sequence::Sequence()
{
	//seq = " ";
	for (int i = 0; i < len; i++)
		seqA[i] = '\0';
}

//Constructs a sequence based on str[]
Sequence::Sequence(string str)
{
	seq = str;
	len = str.length();
	for (int i = 0; i < len; i++)
		seqA[i] = seq.at(i);
}

//Copy constructor
Sequence::Sequence(Sequence& orig)
{
	seq = orig.getSeq();
	len = orig.getLength();
	for (int i = 0; i < len; i++)
		seqA[i] = orig.at(i);
}

Sequence::~Sequence()
{
	//This is the destructor
}

//Sets assigns value to a specific index within seqA
void Sequence::setData(int index, char value)
{
	seqA[index] = value;
}

//Returns the length
int Sequence::getLength()
{
	return len;
}

//Returns the seqs
string Sequence::getSeq()
{
	return seq;
}
//Returns the char at the specified index within seqA
char Sequence::at(int index)
{
	return seqA[index];
}

void Sequence::append(string str)
{
	seq += str;
}

void Sequence::show()
{
	cout << seq;
}

// FinalProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Gene.h"
#include "Sequence.h"

class Gene
{
	private:
		//This is the pointer for the sequence constructor
		Sequence *seq;
		//Not sure where this is used
		int size;

	public:
		Gene()
		{
			//This is the default constructor
		}

		Gene(ifstream &in_file,ofstream &out_file, int overlap)
		{
			//This constructs a gene using infile
			//Outfile is where the output printed
			//Overlap is the minimum overlap in the genes
		}
	
		Gene(const Gene& orig)
		{
			//This is the copy constructor
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

class Sequence
{
	private:
		//Nothing yet

	public:
		Sequence()
		{
			//This is the default constructor
		}

		Sequence(char str[])
		{
			//Constructs a sequence based on str[]
		}

		Sequence(const Sequence& orig)
		{
			//This is a copy constructor
		}

		virtual ~Sequence()
		{
			//This is the destructor
		}

		void setData(int index, char value)
		{
			//Assigns value to index within str
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

int main(int argc, char* argv[])
{
	//Everything below reads in and assigns the file to file_contents
	//***************************************************************
	//ifstream geneFile;
	//geneFile.open(argv[1]);
	//string str;
	//string file_contents;
	//while (getline(geneFile, str))
	//{
	//	file_contents += str;
	//}

	string file_contents = "";
}

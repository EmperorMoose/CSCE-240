// FinalProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Gene.h"
#include "Sequence.h"

int main(int argc, char* argv[])
{
	//NOTES: Is the sequence on each line, prefaced by the ID? or are they seperate lines?
	//Everything below reads in and assigns the file to file_contents
	//***************************************************************
	//ifstream geneFile;
	//geneFile.open(argv[1]);
	//string str;
	//string file_contents;
	int lines = 2;
	//this counts up the lines in the file
	//while (getline(geneFile, str))
	//{
	//	lines++;
	//}
	

	string *file_contents;
	//file_contents = new string[lines]; 
	file_contents = new string[2];
	file_contents[0] = "TAACGATGCAACAGACGACTATACTAACTTCTCTGGGCCTTGATCACTAAACCGGATTGCTCACTGAGGCAAGACCATATCATACCCGAGATATAGCTGA";
	file_contents[1] = "TTTCCCGCGTACATGTGTGAACCCGGCTGCCTTTGCTTGCGGTCGGGTTGGCTTTTACATTTGGTAGCACTAACGATGCAACAGACGACTATACTAACTT";
	
	Gene *list;
	list = new Gene[lines];
	Sequence sequence;

	for (int i = 0; i < 2;i++)
	{
		list[i] = Gene(file_contents[i], 1);
	}

	for (int i = 0; i < 2;i++)
	{
		if (list[i + 1].doesExist())
		{
			cout << "here";
			list[i].compare(list[i + 1], 1, sequence);
		}
	}
	sequence.show();
	//delete[] file_contents;

}

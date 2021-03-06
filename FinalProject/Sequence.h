#pragma once
#include "stdafx.h"
#ifndef  SEQUENCE_H
#define SEQUENCE
#include <string>
#include <string.h>
#include <iostream>

using namespace std;

class Sequence
{
public:
	friend class Gene;
	string seq;
	int len;
	char seqA[100];

	Sequence();
	Sequence(string str);
	Sequence(Sequence& orig);
	virtual ~Sequence();

	void setData(int index, char value);
	int getLength();
	string getSeq();
	char at(int index);
	void append(string str);
	void show();

};
#endif // ! SEQUENCE_H

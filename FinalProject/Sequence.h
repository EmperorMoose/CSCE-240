#pragma once
#include "stdafx.h"
#ifndef  SEQUENCE_H
#define SEQUENCE
#include <string>
#include <string.h>
#include <iostream>

class Sequence
{
public:
	string seq;
	int len;
	char seqA[];

	Sequence();
	Sequence(string str);
	Sequence(const Sequence& orig);
	virtual ~Sequence();

	void setData(int index, char value);
	int getLength();
	string getSeq();
	char at(int index);
	Sequence & operator=(const char *str);
	bool isValid(const char *str);

};
#endif // ! SEQUENCE_H

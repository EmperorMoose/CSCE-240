/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   Gene.h
* Author: homayoun
*
* Created on November 29, 2016, 4:45 PM
*/
#ifndef GENE_H
#define GENE_H
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "Sequence.h"

using namespace std;

class Gene : public Sequence {
public:
	Gene();
	Gene(string str, int overlap);
	Gene(Gene& orig);
	virtual ~Gene();
	int numSeq(ifstream & in_file);
	int overlap;
	int len;
	bool exists;
	void compare(Gene cmp, int overlap, Sequence sequence);
	int findSub(char subSeqA[]);
	bool exists();
private:
	Sequence *seq;
	int size;

};

#endif /* GENE_H */

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sequence.h
 * Author: homayoun
 *
 * Created on December 1, 2016, 9:00 AM
 */

#ifndef SEQUENCE_H
#define SEQUENCE_H
#include "String.h"
#include <string>

class Sequence : public String {
public:
	string seq;
	int len;
	char seqA[];
    Sequence();
    Sequence(char str[]);
    Sequence(const Sequence& orig);
    virtual ~Sequence();

    void setData(int index, char value);
	int getLength();
	string getSeq();
	char at(int index);
    Sequence & operator=(const char *str);
    bool isValid(const char *str);
private:

};

#endif /* SEQUENCE_H */

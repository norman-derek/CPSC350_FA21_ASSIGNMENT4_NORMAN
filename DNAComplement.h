/* 
Derek Norman
2364922
norman@chapman.edu
CPSC-350-03
Assignment 4
*/

/*
* class called DNAComplement that reads a DNA sequence from a text file, calculates the complement of the DNA sequence,
* and calculates the reverse complement of the DNA sequence
*/

#ifndef DNACOMPLEMENT_H
#define DNACOMPLEMENT_H

#include "GenStack.h"
#include "FileProcessor.h"
#include <fstream>

class DNAComplement {
    public:
        DNAComplement(); //constructor
        ~DNAComplement(); //destructor
        void outputFileDNA(); //outputs the dna sequence, complement, and reverse complement to a text file
        string complement(); //calculates the complement of the DNA sequence
        string reverseComplement(); //calculates the reverse complement of the DNA sequence
    private:
        string mDNASequence; //string representing a DNA sequence
        GenStack<char> *stack;
};

#endif
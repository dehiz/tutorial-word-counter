/*
 * WordCounter.cpp
 *
 *  Created on: Mar 8, 2014
 *      Author: aabou
 */

#include "WordCounter.hpp"

#include <cstring>

// ---------------------------------------------
WordCounter::WordCounter() {

}

// ---------------------------------------------
WordCounter::WordCounter(const string& iText) :
    _text(iText) {

}

// ---------------------------------------------
unsigned int WordCounter::count() {
    unsigned int aCount = 0;
    char *aWord = 0;
    char aDelimiters[] = " :.\n";
    char aText[_text.length() + 1];
    strcpy(aText, _text.c_str());

    aWord = strtok(aText, aDelimiters);
    while (aWord) {
        aCount++;
        aWord = strtok(0, aDelimiters);
    }
    return aCount;
}

// ---------------------------------------------
WordCounter::~WordCounter() {

}


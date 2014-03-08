/*
 * WordCounter.hpp
 *
 *  Created on: Mar 8, 2014
 *      Author: aabou
 */

#ifndef WORDCOUNTER_HPP_
#define WORDCOUNTER_HPP_

#include <string>

using namespace std;

class WordCounter {
public:
    //! Constructors
    //@{
    WordCounter();
    WordCounter(const string& iText);
    //@}

    //! Destructor
    virtual ~WordCounter();

    //! Get the number of words in text
    unsigned int count();
private:
    string _text;
};

#endif /* WORDCOUNTER_HPP_ */

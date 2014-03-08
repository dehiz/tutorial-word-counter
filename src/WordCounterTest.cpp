/*
 * WordCounterTest.cpp
 *
 *  Created on: Mar 8, 2014
 *      Author: aabou
 */

#include "WordCounter.hpp"

#include <gtest/gtest.h>

using namespace std;

TEST(WordCounterTest, Count) {
    string aText(
        "I am the master of my fate:\n"
        "I am the captain of my soul."
    );
    WordCounter aWordCounter(aText);
    EXPECT_EQ(56, aText.length());
    EXPECT_EQ(14, aWordCounter.count());
}

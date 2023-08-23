//
//  strings and characters manipulation.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 23.08.2023.
//

#include <iostream>
using namespace std;
#include "strings and characters manipulation.hpp"

unsigned stringLength(int * startPointer) {
    unsigned count = 0;
    while (*(startPointer +count) != '\0') {
        count += 1;
    }
    return count;
}

void concatenateStrings(char *first, char *second) {

    // get first string count
    int firstStringCount = 0;
    while (*(first + firstStringCount) != '\0') {
        firstStringCount += 1;
    }
    
    // get second string count
    int secondStringCount = 0;
    while (*(second + secondStringCount) != '\0') {
        secondStringCount += 1;
    }
    
    // append to first string
    for (int index = 0; index < secondStringCount; ++index) {
        *(first + firstStringCount + index) = *(second + index);
        if ((secondStringCount - 1) == index) {
            *(first + firstStringCount + index + 1) = '\0';
        }
    }
}

int firstIndexWherePatternMatches(char * text, char * pattern) {
    // get first string count
    int firstStringCount = 0;
    while (*(text + firstStringCount) != '\0') {
        firstStringCount += 1;
    }
    
    // get second string count
    int secondStringCount = 0;
    while (*(pattern + secondStringCount) != '\0') {
        secondStringCount += 1;
    }
    
    // edge case
    if (secondStringCount <= 0) {
        return 0;
    }
    
    int matchIndex = -1;
    bool hasFoundFirstIndex = false;

    for (int index = 0; index < firstStringCount; ++index) {
        if (*(text + index) == *pattern) {
            if (!hasFoundFirstIndex) {
                matchIndex = index;
                hasFoundFirstIndex = true;
                cout << "found match at index: " << index << endl;
                
                
                for (int secondIndex = 0; secondIndex < secondStringCount; ++ secondIndex) {
                    if (*(text + index + secondIndex) != *(pattern + secondIndex)) {
                        matchIndex = -1;
                        hasFoundFirstIndex = false;
                    }
                }
            }
        }
    }
    
    return matchIndex;
}

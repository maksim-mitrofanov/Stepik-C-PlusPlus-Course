//
//  removing extra whitespaces.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 19.08.2023.
//

#include "removing extra whitespaces.hpp"
#include <iostream>
using namespace std;

void removeExtraWhiteSpaces() {
    char userInputLastChar = '\0';
    char lastOutputChar = ' ';
    
    while (cin.get(userInputLastChar)) {
        if ((lastOutputChar == ' ') && (userInputLastChar == ' ')) {
            lastOutputChar = userInputLastChar;
        } else {
            lastOutputChar = userInputLastChar;
            cout << lastOutputChar;
        }
    }
}

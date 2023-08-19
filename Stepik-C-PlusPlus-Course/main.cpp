//
//  main.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 18.08.2023.
//

#include <iostream>
#include "base 2 log.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    int argument = 0;
    cin >> argument;
    cout << "Calculating result for: " << argument << endl;
    
    int result = integerLogarithmBase2(argument);
    
    cout << "Result for " << argument;
    cout << " is: " << result << endl;

        
    return 0;
}

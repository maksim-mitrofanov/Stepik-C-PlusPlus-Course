//
//  main.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 18.08.2023.
//

#include <iostream>
#include "real root calculation.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    int value1;
    int value2;
    int value3;
    
    while (true) {
        cout << "Enter a, b & c" << endl;
        cin >> value1 >> value2 >> value3;
        roots(value1, value2, value3);
    }
    
    return 0;
}

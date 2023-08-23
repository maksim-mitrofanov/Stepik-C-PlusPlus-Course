//
//  main.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 18.08.2023.
//

#include <iostream>
#include <iomanip>
#include "maximum value in array pointer.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    int array[] = {10, 20, 319, 42, 5, 6};
    int * resultPointer = maximumValuePointer(&array[0], &array[6]);
    
    cout << *resultPointer << endl;
    
    return 0;
}

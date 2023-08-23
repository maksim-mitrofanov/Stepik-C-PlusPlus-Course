//
//  main.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 18.08.2023.
//

#include <iostream>
#include <iomanip>
#include "contains value.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    int array[] = {1, 2, 3, 4, 5, 6};
    int * startPointer = &array[0];
    int * endPointer = &array[7];
    bool result = containsValue(startPointer, endPointer, 4);
    
    cout << boolalpha << result << endl;
    
    return 0;
}

//
//  main.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 18.08.2023.
//

#include <iostream>
#include <iomanip>
#include "maximum value in array.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    int array[] = {10, 20, 3, 42, 5, 6};
    int result = maximumValueIn(&array[0], &array[6]);
    
    cout << result << endl;
    
    return 0;
}

//
//  main.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 18.08.2023.
//

#include <iostream>
#include <iomanip>
#include "maximum value pointer with bool.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    int array[] = {10, 20, 319, 42, 5, 6};
    int result = 0;
    
    bool didFindMaxValue = maxValuePointer(array, array + 6, &result);
    
    if (didFindMaxValue) {
        cout << "Has found result" << endl;
        cout << "Max value: " << result << endl;
    } else {
        cout << "Coudn't find result" << endl;
    }
        
    return 0;
}

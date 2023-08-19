//
//  Root Calculation.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 19.08.2023.
//

#include <iostream>
#include "real root calculation.hpp"
#include "power.hpp"

using namespace std;

void roots(int a, int b, int c) {
    int discriminant = power(b, 2) - (4 * a * c);
    
    cout << "Discriminant: " << discriminant << endl;
    
    if (discriminant < 0) {
        cout << "No real roots" << endl;
    } else if (discriminant == 0) {
        double answer = -b / (2 * a);
        cout << answer << answer << endl;
    } else if (discriminant > 0) {
        double answer1 = (-b + sqrt(discriminant)) / (2 * a);
        double answer2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << answer1 << answer2 << endl;
    }
}


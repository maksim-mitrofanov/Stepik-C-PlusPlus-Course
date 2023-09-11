//
//  main.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 18.08.2023.
//

#include <iostream> // output
#include <cstddef> // size_t
#include <cstring> // strlen, strcpy
using namespace std;

struct String {
    String(const char *str = "");
    String(size_t n, char c);
    ~String();
    
    
    /* Реализуйте этот метод. */
    void append(String &other);
    
    size_t size;
    char *str;
};

String::String(const char *str) {
    size_t stringLength = strlen(str);
    this->size = stringLength;
    
    // Allocate dynamic memory to store passed string
    char* storage = new char [size+1];
    
    // Store string in dynamic memory
    for (int i = 0; i <= size; ++i) {
        storage[i] = str[i];
    }
    
    this->str = storage;
}

String::~String() {
    delete [] str;
    size = 0;
}


void String::append(String &other) {
    size_t totalStringSize = size + other.size + 1;
    char* storage = new char [totalStringSize];
    
    for (size_t i = 0; i < size; ++i) {
        storage[i] = str[i];
    }
    
    for(size_t i = 0; i < other.size; ++i) {
        storage[size + i] = other.str[i];
    }
            
    size = totalStringSize;
    storage[totalStringSize-1] = '\0';
    
    delete [] str;
    str = storage;
}

int main(int argc, const char * argv[]) {
    String s1("Hello, beautiful");
    String s2(" world!");
    
    s2.append(s2); // теперь s1 хранит "Hello, world!"
    
    for (size_t i = 0; i < s1.size; ++i) {
        char value = s2.str[i];
        cout << value;
    }
    cout << endl;
    return 0;
}

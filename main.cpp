/* 
    Header file library helps us work with input and output objects, such as cout
    Header files add functionality to C++ programs 
*/
#include <iostream>

// This means, that we can use names for objects and variables from the standard libary.
using namespace std;

// Therefore, the above two commands are required to work with C++ library

int main()
{
    string programmingLanguage = "C++";

    // cout is an object used together with insertion operator (<<) to output/print text.
    cout << programmingLanguage + "\n";

    // In case, if we dont use the standard namespace (line 8) and still want to use standard library
    // Then we can use std:: to use the standard namespace library.
    std::cout << programmingLanguage + "\n";

    // Another way to insert a new line, is with the endl manipulator
    cout << programmingLanguage << endl;
    return 0;
}
#include <string>
#include <iostream>

using namespace std;

int main()
{
    /*
        & (Reference operator) returns the memory location of a variable. 
        Pointer is a variable that stores the memory locaation as its value and is stored on a different location itself.
        The below program will help in understanding
    */
    string food = "Pizza";
    string *pointer = &food;

    cout << "Variable food value: " << food << endl;
    cout << "Variable food memory location: " << &food << endl;
    cout << "Variable pointer value: " << pointer << endl;
    cout << "Variable pointer memory location: " << &pointer << endl;

    food = "Burger";

    cout << food << endl;
    cout << pointer << endl;

    // * operator allow us to access the memory location and gets the value
    cout << "Value of the item stored in the memory space (" << pointer << ") is: " << *pointer << endl;

    // Alternative for the above command
    cout << **&pointer << endl;

    return 0;
}
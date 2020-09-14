#include <iostream>

using namespace std;

int main()
{
    const float PI = 3.14;
    cout << "The circumference of a circle is 2πr" << endl;
    int x;
    cout << "Please type the value of the radius: ";

    // Object to take the user input from the terminal
    cin >> x;
    cout << "The result is: " << (2 * PI * x) << endl;
}
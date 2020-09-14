#include <iostream>

using namespace std;

int main()
{
    int x = 10, y = 20;
    std::cout << "The sum of x and y is : " << (x + y) << endl;
    std::cout << "The product of x and y is :" << (x * y) << endl;

    double a = 20.00, b = 10.00;
    cout << "The division of a by b is :" << (a / b) << endl;

    // Constant - Read only variable
    const float PI = 3.14;

    cout << "The circumferance of a circle is 2πr : " << (2 * PI * 10) << endl;
    return 0;
}
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    cout << "Number series of n**2" << endl;
    for (int x = 1; x < 100; x++)
    {
        cout << pow(x, 2) << " ";
    }
    cout << "\nFinished\n";
    return 0;
}
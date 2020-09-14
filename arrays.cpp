#include <string>
#include <iostream>

using namespace std;

int main()
{
    string languages[] = {"C++", "C#", "Java", "Python", "JavaScript"};
    for (int i = 0; i < 5; i++)
    {
        cout << languages[i] << endl;
    }
    return 0;
}
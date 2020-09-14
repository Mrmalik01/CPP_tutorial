#include <iostream>
#include <string>

using namespace std;

int main()
{
    string firstName = "Khizar";
    string lastName = "Malik";
    string fullName = firstName.append(" " + lastName);
    firstName = "Khizer";
    cout << ("Full name: " + fullName) << endl;
    cout << "Length of the name: " << fullName.length() << endl;

    // String is an array of characters
    cout << "First character of the name: " << fullName[0] << endl;

    return 0;
}
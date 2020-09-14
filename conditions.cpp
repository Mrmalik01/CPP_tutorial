#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    int dice = rand() % 7 + 1;
    if (dice < 5)
    {
        cout << "You rolled a dice of number smaller than 5: " << dice << endl;
    }
    else
    {
        cout << "You rolled a dice of number greater than 4: " << dice << endl;
    }

    // Short hand If...Else
    string result = ((dice % 2) == 0) ? "You've got an even number: " : "You've got an odd number: ";
    result = result.append(to_string(dice));
    cout << result << endl;
    return 0;
}
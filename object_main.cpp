#include "objects.cpp"
#include <iostream>

int main()
{
    OnlineBank monzo("Monzo", "info@monzo.com", "Retail", "https://www.monzo.com");
    OnlineBank starling("Starling", "info@starling.com", "Retail", "https://www.starling.com");
    Bank hsbc("HSBC", "info@hsbc.com", "Retail");
    Bank barclays("Barclays", "info@barclays", "Retail");
    Bank banks[] = {monzo, starling, hsbc, barclays};

    // sizeof returns the size in bytes, not in elements
    for (int i = 0; i < (sizeof(banks) / sizeof(banks[0])); i++)
    {
        cout << banks[i].describe() << endl;
    }
}
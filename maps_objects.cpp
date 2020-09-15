#include <iostream>
#include <iterator>
#include "objects.cpp"
#include <map>
using namespace std;

int main()
{
    OnlineBank monzo("Monzo", "info@monzo.com", "Retail", "https://www.monzo.com");
    OnlineBank starling("Starling", "info@starling.com", "Retail", "https://www.starling.com");
    Bank hsbc("HSBC", "info@hsbc.com", "Retail");
    Bank barclays("Barclays", "info@barclays", "Retail");
    Bank banks[] = {monzo, starling, hsbc, barclays};
    map<string, Bank> registry;

    // sizeof returns the size in bytes, not in elements
    for (int i = 0; i < (sizeof(banks) / sizeof(banks[0])); i++)
    {
        registry.insert(make_pair(banks[i].name, banks[i]));
    }
    map<string, Bank>::iterator itr;
    for (itr = registry.begin(); itr != registry.end(); itr++)
    {
        cout << itr->second.describe() << endl;
    }
}
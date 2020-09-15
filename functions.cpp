#include <iostream>
#include <string>

using namespace std;

double simpleInterest(double &principal, double &rate, int &time)
{
    if ((principal != 0) && (rate != 0) && (time != 0))
    {
        return principal * (1 + rate * time);
    }
    return -1.00;
}

int main()
{
    cout << "Simple Interest Calculator\n";
    cout << "Enter Principle: ";
    double principle, rate;
    int year;
    cin >> principle;
    cout << "Enter Rate: ";
    cin >> rate;
    cout << "Enter Year: ";
    cin >> year;
    cout << simpleInterest(principle, rate, year) << endl;
}
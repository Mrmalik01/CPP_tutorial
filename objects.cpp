
#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Bank
{
public:
    string id;
    string name;
    string email;
    string address;
    string type;

    Bank(string name, string email, string type)
    {
        this->id = this->generateId();
        this->name = name;
        this->email = email;
        this->type = type;
    }

    string describe()
    {
        return "Bank Name: " + this->name + "\nBank Id: " + this->id + "\nType: " + this->type + "\n";
    }

private:
    string generateId()
    {
        string result;
        for (int i = 0; i < 10; i++)
        {
            result.append(to_string(rand() % 10));
        }
        return result;
    }
};

class OnlineBank : public Bank
{
public:
    string website;
    OnlineBank(string name, string email, string type, string website) : Bank(name, email, type)
    {
        this->website = website;
    }

    string describe()
    {
        return "Bank Name: " + this->name + "\nBank Id: " + this->id + "\nType: " + this->type + "\nOnline: True\n";
    }
};
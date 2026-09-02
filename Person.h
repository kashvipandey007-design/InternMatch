#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person
{
protected:
    string name;
    string email;

public:
    Person()
    {
        name = "";
        email = "";
    }

    Person(string n, string e)
    {
        name = n;
        email = e;
    }

    void setName(string n)
    {
        name = n;
    }

    void setEmail(string e)
    {
        email = e;
    }

    string getName()
    {
        return name;
    }

    string getEmail()
    {
        return email;
    }
};

#endif
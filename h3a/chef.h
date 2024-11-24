#ifndef CHEF_H
#define CHEF_H
#include <iostream>
#include <string>
using namespace std;

class Chef
{
protected:
    string name;

public:
    //konstruktori
    Chef(string chefName);

    //jäsenfunktiot
    void makeSalad();
    void makeSoup();

    //destruktori
    virtual ~Chef();
};

#endif // CHEF_H

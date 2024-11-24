#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include <string>
#include <iostream>
#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(string chefName);

    string getName();

    void makePasta();

    ~ItalianChef();
};

#endif // ITALIANCHEF_H

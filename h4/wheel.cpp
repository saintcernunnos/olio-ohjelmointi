#include "wheel.h"

//getterit ja setterit
int Wheel::getSize() const
{
    return size;
}

void Wheel::setSize(int newSize)
{
    size = newSize;
}

string Wheel::getType() const
{
    return type;
}

void Wheel::setType(const string &newType)
{
    type = newType;
}

//konstruktori
Wheel::Wheel() : size(0), type("") {}
//parametrien konstruktori
Wheel::Wheel(int size, const string &type) : size(size), type(type) {}

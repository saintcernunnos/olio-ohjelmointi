#ifndef WHEEL_H
#define WHEEL_H
#include <string>
using std::string;

class Wheel
{
private:
    int size;
    string type;

public:
    Wheel(); //konstruktori
    Wheel(int size, const string &type); //parametrien konstruktori

    //getterit ja setterit
    int getSize() const;
    void setSize(int newSize);
    string getType() const;
    void setType(const string &newType);
};

#endif // WHEEL_H

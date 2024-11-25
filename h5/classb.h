#ifndef CLASSB_H
#define CLASSB_H
#include <string>
using namespace std;

class ClassB
{
private:
    string info;
public:
    string getInfo() const;
    void setInfo(const string &value);
};

#endif // CLASSB_H

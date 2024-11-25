#ifndef CAR_H
#define CAR_H
#include "wheel.h"
#include "engine.h"
#include <vector>
using std::vector;

class Car
{
private:
    string model;
    string brand;
    Engine engine; //engine-olio

    //neljä rengasta suoraan, vaikutti kätevältä ratkaisulta
    //haluttaessa tehdä yksitellen tehtäisiin neljä eri oliota: Wheel wheel1; Wheel wheel2; jne
    vector<Wheel> wheels;

public:
    Car(); //konstruktori
    Car(const string &model, const string &brand); //parametrien konstruktori

    //getterit ja setterit
    string getModel() const;
    void setModel(const string &newModel);
    string getBrand() const;
    void setBrand(const string &newBrand);

    void setEngine();
    void setWheels();

    void printDetails() const; //tulostus
};

#endif // CAR_H

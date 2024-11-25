#include "car.h"
#include <iostream>
using namespace std;

//getterit ja setterit
string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::setEngine() {
    engine.setHorsepower(150);
    engine.setDisplacement(2.0);
}

void Car::setWheels() {
    //käytetään auto, jotta täytetään kaikki neljä rengasta kerralla
    for (auto& wheel : wheels) {
        wheel.setSize(17);
        wheel.setType("summer tyre");
    }
}

//konstruktori
Car::Car() : model(""), brand(""), wheels(4) {}

//parametrien konstruktori
Car::Car(const string &model, const string &brand) : model(model), brand(brand), wheels(4) {}

void Car::printDetails() const {
    cout <<"Brand: "<< brand << endl;
    cout <<"Model: "<< model << endl;

    //moottori
    cout <<"Engine information: horsepower = "<< engine.getHorsepower() <<", displacement = "<< engine.getDisplacement()<< endl;

    //renkaat
    cout <<"\nWheels information:"<< endl;
    for (size_t i=0; i< wheels.size(); ++i) {
        cout <<"Wheel "<< i+1 <<": Size = "<< wheels[i].getSize() <<" inches, type = "<< wheels[i].getType() << endl;
    }
}

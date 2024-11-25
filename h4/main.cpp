#include <iostream>
#include "car.h"

int main()
{
    Car car("Corolla", "Toyota"); //luodaan Car-olio

    //kutsutaan
    car.setEngine();
    car.setWheels();

    car.printDetails(); //tulostus

    return 0;
}

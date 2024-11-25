#include "engine.h"

//getterit ja setterit
int Engine::getHorsepower() const
{
    return horsepower;
}

void Engine::setHorsepower(int newHorsepower)
{
    horsepower = newHorsepower;
}

double Engine::getDisplacement() const
{
    return displacement;
}

void Engine::setDisplacement(double newDisplacement)
{
    displacement = newDisplacement;
}

//konstruktori
Engine::Engine() : horsepower(0), displacement(0.0) {}

//parametrien konstruktori
Engine::Engine(int horsepower, double displacement) : horsepower(horsepower), displacement(displacement) {}

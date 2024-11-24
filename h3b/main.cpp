#include "animal.h"
#include "dog.h"

int main()
{
    Animal* animal = new Animal();
    animal->callOut();

    Animal* dog = new Dog();
    dog->callOut();

    //virtuaalisen destruktorin avulla animal-destruktori kutsutaan automaattisestin dog-destruktorin jälkeen
    delete dog;

    return 0;
}

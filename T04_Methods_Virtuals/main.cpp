#include <iostream>
#include "Animal.h"
#include "Dog.h"

int main()
{
    /*Animal animal = Animal();
    animal.describe();*/

    /*Dog dog = Dog();
    dog.describe();*/

    Animal* dog = new Dog;
    dog->describe();
    delete dog;
}

#include <iostream>
#include "Device.h"

int main()
{
    //Create object of laptop default constructor
    Laptop cLaptop;

    //Create object of laptop overloaded constructor
    Laptop oLaptop(std::string brand, std::string model, int serialNumber, int storage, int ramSize);

    //Call print details for default constructor
    cLaptop.printDetails();


    return 0;

}




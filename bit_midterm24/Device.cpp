//
// Created by morga on 2024-07-27.
//

#include "Device.h"
#include <string>
#include <iostream>

using namespace std;

//b. Implement the default constructor that should initialize all four members
Device::Device()
{
    //Initalise private member variables of Device
    brand = "NA";
    model = "NA";
    serialNumber = 0;
    price = 0;
}

//c. Implement the overloaded constructor that should take all these member data values to be set at the time a Device object is created
Device::Device(string brand, string model, int serialNumber, float price)
{
    //Overloaded constructor code
}

// d.  Create calculatePrice() method, which sets the price to 4500
float Device::calculatePrice()
{
    price = 4500;
    return price;
}

float Device::setPrice()
{

   price = calculatePrice();

    //Only accepted price value is between 100 and 3000 (If lower or higher should be set to 100 or 3000)
    if( price < 100)
    {
        //If price lower than 100 set to 100
        price = 100;
    }
    else if (price > 3000 )
    {
        //If price higher than 3000 set to 3000
        price = 3000;
    }
    else
    {
        //Otherwise keep price same as set in calculatePrice method
        price = calculatePrice();
    }

    return price;
}

string Device::getBrand()
{
    return brand;
};

string Device::getModel()
{
    return model;
};

int Device::getserialNumber()
{
    return serialNumber;
}

float getPrice()
{
    return price;
}

//Implement the default constructor that should initialize all four members of the super class
//(refer to point 1.b). Also, the derived-class's attributes should be set to 0.
Laptop::Laptop() : Device ()
{
    //Attributes set to 0
    storage = 0;
    ramSize = 0;
}

Laptop::Laptop (int storage, int ramSize) : Device(string brand, string model, int serialNumber)
{

}


float Laptop::calculatePrice()
{
    if (ramSize > 16 )
    {
    }
    else
    {

    }
}

// Implement printDetails() method that outputs the laptop's details (brand, model, serialNumber, storage, and ramSize).
//The method should be accessible by any classes in the application
//Your output should be similar to the one shown in the example below
void Device::printDetails()
{
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model <<  endl;
    cout << "Serial Number: " << serialNumber << endl;
    cout << "RAM: " << ramSize << endl;
    cout << "Storage: " << storage << endl;
    cout << "Price:  " << price << endl;
}


//Destructor
Device::~Device()
{
    //Destructor code
}


//Ran out of time :(
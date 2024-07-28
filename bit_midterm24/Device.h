//
// Created by morga on 2024-07-27.
//

#ifndef DEVICE_H
#define DEVICE_H
#include <string>

#pragma once

//Super class Device
class Device {
//a. All the attributes are private.
public:
    Device(); //Constructor
    Device(std::string brand, std::string model, int serialNumber, float price); //Overloaded constructor
    ~Device(); //Destructor
    float setPrice(); //Set the access specifier for this method that it can be accessed/used by any class in the application
    //Implement getters for all the attributes that should be accessible by any class in the application
    std::string getBrand();
    std::string getModel();
    int getserialNumber();
    float getPrice();
    void printDetails();
private:
    std::string brand;
    std:: string model;
    int serialNumber;
    float price;
protected:
    //d. CalculatePrice method should only be accessible by the super class and any derived classes of it
    float calculatePrice();
};

//Create derived class Laptop
class Laptop : public Device
{
    //All attributes are public

public:
    int storage;
    int ramSize;
    Laptop(); //Constructor
    Laptop(std::string brand, std::string model, int serialNumber, int storage, int ramSize); //Overload Constructor
    ~Laptop(); //Destructor
};


#endif //DEVICE_H

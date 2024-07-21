//
// Created by morga on 2024-07-20.
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>

#pragma once

class Employee {
public:
    std::string name;

    Employee() {
        name = " [empty]";
    }

    void getName();

    void displayName();

};


#endif //EMPLOYEE_H

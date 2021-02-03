//
// Created by jihee on 1/26/2021.
//

#ifndef RESTAURANT_EMPLOYEE_H
#define RESTAURANT_EMPLOYEE_H
#include <iostream>

class Employee {
private:
    static int increment;
    int id;
    std::string name;
    int salary;

public:
    Employee(const std::string &name, int salary);

    ~Employee();

    virtual void print_employee(std::ostream &out) const;


};


#endif //RESTAURANT_EMPLOYEE_H

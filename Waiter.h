//
// Created by jihee on 1/26/2021.
//

#ifndef RESTAURANT_WAITER_H
#define RESTAURANT_WAITER_H


#include "Employee.h"

class Waiter : public Employee{
private:
    bool certified;
public:
    Waiter(const std::string &name, int salary, bool certified);

    virtual ~Waiter();

    void print_employee(std::ostream &out) const override;

};


#endif //RESTAURANT_WAITER_H

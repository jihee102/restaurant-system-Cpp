//
// Created by jihee on 1/26/2021.
//

#include "Employee.h"
int Employee::increment =0;

Employee::Employee(const std::string &name, int salary) : name(name), salary(salary) , id(increment++) {}

Employee::~Employee() {

}

void Employee::print_employee(std::ostream &out) const {
    out << "Employee Id:" << id << ", " << name << " (" << salary << "). ";

}

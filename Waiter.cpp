//
// Created by jihee on 1/26/2021.
//

#include "Waiter.h"

Waiter::Waiter(const std::string &name, int salary, bool certified) : Employee(name, salary), certified(certified) {}

Waiter::~Waiter() {

}

void Waiter::print_employee(std::ostream &out) const {
    Employee::print_employee(out);
    out << (certified ? "certified" : "uncertified" );
}

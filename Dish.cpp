//
// Created by jihee on 1/26/2021.
//

#include "Dish.h"

Dish::Dish(const std::string &name, double price, const std::string &category) : name(name), price(price),
                                                                                 category(category) {}

Dish::~Dish() {

}

double Dish::get_price() const {
    return price;
}

void Dish::print_dish(std::ostream &out, const std::string &indentation) const {
    out <<indentation<< name << ": " << price ;
}

const std::string &Dish::get_name() const {
    return name;
}

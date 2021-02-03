//
// Created by jihee on 1/26/2021.
//

#include "Cook.h"

Cook::Cook(const std::string &name, int salary) : Employee(name, salary) {}

Cook::~Cook() {

}

void Cook::print_employee(std::ostream &out) const {
    Employee::print_employee(out);
    out << " Can prepare the following: ";
    out << std::endl;

    for(auto dish : dish_list){
        dish->print_dish(out, "\t");
        out <<std::endl;
    }

}


std::shared_ptr<Dish> Cook::get_dish_with_name(const std::string &name) const {
    for(auto dish : dish_list){
        if(dish->get_name() == name){
            return dish;
        }
    }

    return nullptr;
}



void Cook::add_dish(const std::string &name, double price, const std::string &category) {
    if(name.empty() || category.empty()|| price ==0){
        throw std::runtime_error("Dish name / category / price can not be empty or 0!");
    }

    auto existing = get_dish_with_name(name);
    if(existing){
        throw std::runtime_error("Dish with the name "+ name +" is already existing!");
    }

    auto dish = std::make_shared<Dish>(name, price, category);

    dish_list.push_back(dish);
}

std::shared_ptr<Dish> Cook::get_most_expensive_dish() const {
    double price = 0;
    std::shared_ptr<Dish> expensive;
    for( auto dish : dish_list){
        if(dish->get_price() > price){
            price = dish->get_price();
            expensive = dish;
        }
    }

    return price >0 ? expensive : nullptr;
}


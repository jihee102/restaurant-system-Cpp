//
// Created by jihee on 1/26/2021.
//

#include "RestaurantAdmin.h"
#include "Cook.h"
#include "Waiter.h"

RestaurantAdmin::RestaurantAdmin() {}

RestaurantAdmin::~RestaurantAdmin() {

}

std::shared_ptr<Employee> RestaurantAdmin::find_employee(const std::string &name) const {
    auto iterator = employees.find(name);

    return iterator == employees.cend() ? nullptr: iterator->second;
}

void RestaurantAdmin::add_cook(const std::string &name, int salary) {
    if(name.empty() || salary ==0){
        throw std::runtime_error("Name and salary can not be empty or 0");
    }

    auto employee = find_employee(name);
    if(employee){
        throw std::runtime_error("Employee with name "+ name+" already exist!");
    }

    auto cook = std::make_shared<Cook>(name, salary);

    employees[name] = cook;
}

void RestaurantAdmin::add_waiter(const std::string &name, int salary, bool certified) {
    if(name.empty() || salary ==0 ){
        throw std::runtime_error("Name and salary can not be empty or 0");
    }

    auto employee = find_employee(name);
    if(employee){
        throw std::runtime_error("Employee with name "+ name+" already exist!");
    }

    auto waiter = std::make_shared<Waiter>(name, salary, certified);

    employees[name] = waiter;

}

void RestaurantAdmin::add_dishes_for_cook(const std::string cooker, const std::string &dish_name, double price, const std::string &category) {
    auto employee = find_employee(cooker);

    // ensure employee is valid
    if(!employee){
        throw std::runtime_error("Employee with name "+ cooker+" doesn't exist!");
    }

    // ensure employee is a cook
    auto cook = std::dynamic_pointer_cast<Cook>(employee);
    if(!cook){
        throw std::runtime_error("Employee with name "+ cooker+" is not a cook!");
    }

    // add dish in the dish list of the cooker (will throw if dish is already existing)
    cook->add_dish(dish_name, price, category);

}

void RestaurantAdmin::print_employees(std::ostream &out) const {
    out << "Cooks:" <<std::endl;
    for(auto iterator : employees){
        auto cook = std::dynamic_pointer_cast<Cook>(iterator.second);
        if(cook){
            cook->print_employee(out);
            out << std::endl;
        }
    }

    out << "Waiters:" <<std::endl;
    for(auto iterator : employees){
        auto waiter = std::dynamic_pointer_cast<Waiter>(iterator.second);
        if(waiter){
            waiter->print_employee(out);
            out << std::endl;
        }
    }

    out << std::endl;
    if(get_most_expensive_dish() != nullptr){
        out <<"The most expensive dish is: ";
        get_most_expensive_dish()->print_dish(out);
    }

}

std::shared_ptr<Dish> RestaurantAdmin::get_most_expensive_dish() const {
    double current_price = 0;
    std::shared_ptr<Dish> dish ;
    for(auto iterator : employees){
        auto cook = std::dynamic_pointer_cast<Cook>(iterator.second);
        if(cook){
            double expensive_dish_of_cook = cook->get_most_expensive_dish()->get_price();
            if(expensive_dish_of_cook > current_price){
                dish = cook->get_most_expensive_dish();
                current_price =  expensive_dish_of_cook;
            }
        }
    }

    return current_price >0 ? dish : nullptr;
}


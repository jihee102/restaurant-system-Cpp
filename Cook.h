//
// Created by jihee on 1/26/2021.
//

#ifndef RESTAURANT_COOK_H
#define RESTAURANT_COOK_H


#include <vector>
#include <memory>
#include "Employee.h"
#include "Dish.h"

class Cook : public Employee{
private:
    std::vector<std::shared_ptr<Dish>> dish_list;
public:
    Cook(const std::string &name, int salary);

    virtual ~Cook();

    void add_dish(const std::string &name, double price, const std::string &category);

    std::shared_ptr<Dish> get_most_expensive_dish() const;

    std::shared_ptr<Dish> get_dish_with_name(const std::string &name) const;

    void print_employee(std::ostream &out) const override;

};


#endif //RESTAURANT_COOK_H

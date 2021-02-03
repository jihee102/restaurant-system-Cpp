//
// Created by jihee on 1/26/2021.
//

#ifndef RESTAURANT_RESTAURANTADMIN_H
#define RESTAURANT_RESTAURANTADMIN_H


#include <memory>
#include <map>
#include "Employee.h"
#include "Dish.h"

class RestaurantAdmin {
private:
    std::map<std::string, std::shared_ptr<Employee>> employees;

public:
    RestaurantAdmin();

    virtual ~RestaurantAdmin();

    std::shared_ptr<Employee> find_employee(const std::string &name) const;

    void add_cook(const std::string &name, int salary);

    void add_waiter(const std::string &name, int salary, bool certified);

    void add_dishes_for_cook(const std::string cooker, const std::string &dish_name, double price, const std::string &category);

    void print_employees(std::ostream & out) const;

    std::shared_ptr<Dish> get_most_expensive_dish() const;


};


#endif //RESTAURANT_RESTAURANTADMIN_H

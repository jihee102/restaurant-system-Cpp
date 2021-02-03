//
// Created by jihee on 1/26/2021.
//

#ifndef RESTAURANT_DISH_H
#define RESTAURANT_DISH_H
#include <iostream>

class Dish {
private:
    std::string name;
    double price;
    std::string category;

public:
    Dish(const std::string &name, double price, const std::string &category);

    ~Dish();

    void print_dish(std::ostream &out, const std::string &indentation="" ) const;

    double get_price() const;

    const std::string &get_name() const;

};


#endif //RESTAURANT_DISH_H

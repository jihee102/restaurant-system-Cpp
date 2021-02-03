//
// Created by jihee on 1/26/2021.
//

#include <fstream>
#include "io.h"

void read_dish(RestaurantAdmin &restaurantAdmin, const std::string &cook_name ,const std::string &filename) {
    std::ifstream input{filename};

    if(!input.is_open()){
        throw std::runtime_error("Unable to open " + filename);
    }

    // loop until end-of-file is encountered
    for(;;){
        std::string category, name;
        double price;


        input >> category;
        // if the end-of-file has been reached, it's done
        if(category.empty() || input.eof()){
            return;
        }

        input >> name >> price;

        restaurantAdmin.add_dishes_for_cook(cook_name, name, price, category);

    }
}

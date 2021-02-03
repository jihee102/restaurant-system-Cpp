#include <iostream>
#include "RestaurantAdmin.h"
#include "io.h"

int main() {

    RestaurantAdmin restaurantAdmin;

    try{
        restaurantAdmin.add_waiter("Jan Joyful", 2200, true);
        restaurantAdmin.add_waiter("Ruud Ridiculous", 1800, false);
        restaurantAdmin.add_cook("Bram Buffalo", 2800);
        restaurantAdmin.add_cook("Faisan Fish", 2900);

        read_dish(restaurantAdmin,"Bram Buffalo", "dishes2.txt" );
        read_dish(restaurantAdmin,"Faisan Fish", "dishes.txt" );

        restaurantAdmin.print_employees(std::cout);



    } catch (std::exception &exception) {
        std::cerr << exception.what() << std::endl;
    }

    return 0;
}

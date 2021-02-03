# restaurant-system-C++
A simple restaurant menu system / OOP with C++

## assignment description

> Restaurants has two types of employees: waiters and cooks. All employees have a name, a salary (int) and a unique number, starting with 0 and automatically incrementing when an employee is added.
Waiters have one extra property, and this is whether or not they are certified. Cooks also have one extra property and that’s the list of dishes they are able to prepare. A dish has a name, a price(double) and a category. In this example the category is just a String and there are three categories: Burgers, Meat and Fish. 
The dishes can be added in code or can be read from a JSON file. There is a JSON file attached to the project. Then add the following two methods to your application:
-	Add a method to get an overview of the whole administration, which first shows all cooks and then all waiters (see example output). You should do this in a toString() method in your RestaurantAdministration and print the overview in your main method.
-	Add a method that returns the most expensive dish from all dishes. For this you need to add a method getMostExpensiveDish() which should return a Dish object that is the most expensive dish in the system.


> Please note: You don’t have to make a menu or other user interfaces for the system.


## Example outout

Output of the system looks like this:
```text
Cooks:
Employee Id:2, Bram Buffalo (2800 euro). Can prepare the following:
  Cheese Burger XXL: 13.95
  Steak: 10.95

Employee Id:3, Faisan Fish (2900 euro). Can prepare the following:
  Codfish Burger: 9.95
  Shrimp Burger: 15.75
  Smoked Salmon: 12.95

Waiters:
Employee Id:0, Jan Joyful (2200 euro), certified
Employee Id:1, Ruud Ridiculous (1800 euro), uncertified


The most expensive dish is: Shrimp Burger: 15.75

```
---

## Contributor
Jihee Hong, <jihee102@gmail.com>

---
## License & copyright
© Jihee Hong

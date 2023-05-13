// Instructions

// A milk carton can hold 3.78 liters of milk. Each morning, 
// a dairy farm ships cartons of milk to a local grocery store. 
// The cost of producing one liter of milk and the profit of each 
// carton of milk vary from farm to farm.

// Write a program that prompts the user to enter:

//     The total amount of milk produced in the morning.

//     The cost of producing one liter of milk.

//     The profit on each carton of milk.

// The program then outputs:

//     The number of milk cartons needed to hold milk.
//         Round your answer to the nearest integer.

//     The cost of producing milk.

//     The profit for producing milk.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    const double MILK_CARTON = 3.78;
    double total_milk, cost_liter, profit_each_carton;

    cout << "Enter total amount of milk produced" << endl;
    cin >> total_milk;

    cout << "Enter The cost of producing one liter of milk." << endl;
    cin >> cost_liter;

    cout << "Enter The profit on each carton of milk" << endl;
    cin >> profit_each_carton;

    int num_carton = round(total_milk / MILK_CARTON);
    double cost = total_milk * cost_liter;
    double profit = num_carton * profit_each_carton;

    cout << num_carton << endl;
    cout << cost << endl;
    cout << profit << endl;

    return 0;
}

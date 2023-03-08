// Instructions

// A milk carton can hold 3.78 liters of milk. Each morning, 
// a dairy farm ships cartons of milk to a local grocery store. 
// The cost of producing one liter of milk is $0.38, and the 
// profit of each carton of milk is $0.27.

// Write a program that prompts the user to enter:

//     The total amount of milk produced in the morning.

// The program then outputs:

//     The number of milk cartons needed to hold milk.
//         Round your answer to the nearest integer.

//     The cost of producing milk.

//     The profit for producing milk.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    const double CARTON_SIZE = 3.78;
    const double COST_PER_LITER = 0.38;
    const double PROFIT_PER_CARTON = 0.27;
    double total_milk;
    
    cout << "Enter The total amount of milk" << endl;
    cin >> total_milk;

    int cart = round(total_milk / CARTON_SIZE);
    double cost = total_milk * COST_PER_LITER;
    double profit = cart * PROFIT_PER_CARTON ;

    cout << cart << endl;
    cout << cost << endl;
    cout << profit << endl;

    return 0;
}


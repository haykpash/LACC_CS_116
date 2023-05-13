// Summary

// For each used car a salesperson sells, the commission is paid 
// as follows: $20 plus 30% of the selling price in excess of the 
// cost of the car.

// Typically, the minimum selling price of the car is the cost 
// of the car plus $200 and the maximum selling price is the 
// cost of the car and $2,000.
// Instructions

// Write a program that prompts the user to enter:

//     Purchasing cost of the car
//     The minimum to be added to the purchasing cost
//     The maximum to be added to the purchasing cost
//     Salesperson’s fixed commission
//     Percentage of the commission

// The program should output:

//     The minimum and maximum selling price of the car
//     The salesperson’s commission range

//     Since your program handles currency, make sure to use a data 
//     type that can store decimals.

#include <iostream>

using namespace std;

int main() {

    double purchasing_cost, min_added, max_added;
    double percentage_commission, salesperson_commission;

    cout << "Cost of the car" << endl;
    cin >> purchasing_cost;

    cout << "The minimum to be added" << endl;
    cin >> min_added;

    cout << "The maximum to be added" << endl;
    cin >> max_added;

    cout << "Salesperson’s fixed commission" << endl;
    cin >> salesperson_commission;

    cout << "Percentage of the commission" << endl;
    cin >> percentage_commission;

    double max_price = purchasing_cost + min_added;
    double min_price = purchasing_cost + max_added; 

    double min_range = (min_added * percentage_commission) / 100 + salesperson_commission;
    double max_range = (max_added * percentage_commission) / 100 + salesperson_commission;
    
    cout << min_price << endl;
    cout << max_price << endl;
    
    cout << min_range << endl;
    cout << max_range << endl;

    return 0;
}

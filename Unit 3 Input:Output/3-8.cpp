// Summary

// Linda is starting a new cosmetic and clothing business and 
// would like to make a net profit of approximately 10% after 
// paying all the expenses, which include merchandise cost, store
//  rent, employees’ salary, and electricity cost for the store.

// She would like to know how much the merchandise should be 
// marked up so that after paying all the expenses at the end 
// of the year she gets approximately 10% net profit on the 
// merchandise cost.

// Note that after marking up the price of an item she would 
// like to put the item on 15% sale.
// Instructions

// Write a program that prompts Linda to enter:

//     The total cost of the merchandise
//     The salary of the employees (including her own salary)
//     The yearly rent
//     The estimated electricity cost.

// The program then outputs how much the merchandise should be
//  marked up (as a percentage) so that Linda gets the desired profit.

//     Since your program handles currency, make sure to use a
//      data type that can store decimals with a decimal precision of 2.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    double merch, rent, salary, expense, elec, marked_rate, marked_price;

    cout << "Enter The total cost merchand ";
    cin >> merch;
    cout << endl;

    cout << "Enter The salary  ";
    cin >> salary;
    cout << endl;

    cout << "Enter The yearly rent ";
    cin >> rent;
    cout << endl;

    cout << "Enter The estimated electricity ";
    cin >> elec;
    cout << endl;

    expense = merch + salary + rent + elec;

    marked_price = (merch * 0.10 + expense) / 0.85;

    marked_rate = (marked_price * 100) / merch;

    cout << fixed << setprecision(2);

    cout << marked_rate << " " << marked_price - expense;

  return 0;
}

// Instructions

// Write a program that prompts the user to input:

//     The number of quarters
//     The number of dimes
//     The number of nickels.

// The program then outputs:

//     The total value of the coins in pennies.

#include <iostream>

using namespace std;

int main() {
    
    int quarters, dimes, nickels, pennies;

    cout << "Enter The number of quarters" << endl;
    cin >> quarters;

    cout << "Enter The number of dimes" << endl;
    cin >> dimes;

    cout << "Enter The number of quarters" << endl;
    cin >> nickels;

    pennies = quarters * 25 + dimes * 10 + nickels * 5;

    cout << "The total value of the coins in pennies"<< pennies << endl;

  return 0;
}

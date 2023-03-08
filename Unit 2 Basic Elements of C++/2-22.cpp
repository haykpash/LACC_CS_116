// Instructions

// One metric ton is approximately 2,205 pounds.

// Write a program that prompts the user to input:

//     The amount of rice, in pounds, a bag can hold.

// The program outputs:

//     The number of bags needed to store one metric ton of rice.

#include <iostream>

using namespace std;

int main() {
    
    double bag_hold;

    cout << "Enter The amount of rice, in pounds, a bag can hold" << endl;
    cin >> bag_hold;

    double bag_amount = 2205 / bag_hold;

    cout << bag_amount;

    return 0;
}

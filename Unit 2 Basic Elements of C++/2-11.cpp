// Instructions

// Write a program that :

//     Prompts the capacity, in gallons, of an automobile 
//     fuel tank and the miles per gallon the automobile 
//     can be driven.
//     Output the number of miles the automobile can be 
//     driven without refueling.

#include <iostream>

using namespace std;                                   
 
int main()
{
    double tank_capacity, mile_per_galon;

    cout << "Enter the capacity of fuel tank" << endl;
    cin >> tank_capacity;

    cout << "Enter the miles per gallon" << endl; 
    cin >> mile_per_galon;

    cout << tank_capacity * mile_per_galon;

    return 0;
}
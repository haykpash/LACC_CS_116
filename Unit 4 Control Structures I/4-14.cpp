// Instructions

// The short-term, 0-24 hours, parking fee, F, at an international 
// airport is given by the following formula:

//     { 5,              if 0 <= h <= 3
// F = { 6 * int(h + 1), if 3 < h <= 9
//     { 60,             if 9 < h <= 24

// Parking Fee Equation

// where int(h + 1) is the integer value of h + 1. For example, 
// int(3.2) = 3, int(4.8) = 4.

// Write a program that prompts the user to enter the number of
// hours a car is parked at the airport and outputs the parking fee.

#include <iostream>

using namespace std;

int main() {
    
    double h;

    cout << "Enter hour ";
    cin >> h;
    cout << endl;

    if(0 <= h && h <= 3) 
    {
      cout << 5;
    }

    if(3 < h && h <= 9)
    {
      cout << 6 * int(h + 1);
    }

    if(9 < h && h <= 24) 
    {
      cout << 60;
    }

  return 0;
}

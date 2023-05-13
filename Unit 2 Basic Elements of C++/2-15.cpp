Instructions

// Write a program to implement and test the algorithm that you
//  designed for Exercise 15 of Chapter 1. The instructions to 
//  Exercise 15 have been posted below for your convenience:
// Exercise 15

// Given the radius, in inches, and price of a pizza, design an 
// algorithm to find the price of the pizza per square inch.

// You may assume that the value of π = 3.141593.

// In your program, declare a named constant PI to store this value.

// Below is an example of how the completed program should work:

// Enter the radius of the pizza: 20

// Enter the price of the pizza: 22

// The price per square inch is: 0.017507

//     Since your program handles currency, make sure to use a data type 
//     that can store decimals.

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double radius, price, price_per_sq_inch;
    const double PI = 3.141593;

    cout << "Enter the radius of the pizza: ";
    cin >> radius;

    cout << "Enter the price of the pizza: ";
    cin >> price;

    price_per_sq_inch = price / (PI * pow(radius, 2));

    cout << "The price per square inch is: " << price_per_sq_inch;

    return 0;
}
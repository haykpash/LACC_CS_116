// Instructions

// A piece of wire is to be bent in the form of a circle to put around a picture frame.

// Write a program that prompts the user to input:

//     The length of the wire

// The program then outputs:

//     the radius and area of the circle.

// You may assume that π = 3.1416. Declare PI as a named constant with this value.

#include <iostream>

using namespace std;

int main() {
    
    const double PI = 3.1416;
    double length;

    cout << "Enter The length of the wire" << endl;
    cin >> length;

    const double r = length / 2 / PI;
    const double a = PI * r * r;

    cout << r << endl;
    cout << a << endl;

  return 0;
}

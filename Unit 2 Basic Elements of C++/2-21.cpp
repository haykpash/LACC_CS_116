// Summary

// Newton’s law states that the force, F, between two 
// bodies of masses M1 and M2 is given by:

// f = k((m1m2) / d^2)

// Newton's Law

// in which k is the gravitational constant and d is the distance 
// between the bodies. The value of k is approximately 6.67 X 10-8 dyn. cm²/g² .
// Instructions

// Write a program that prompts the user to input:

//     The masses of the bodies
//     The distance between the bodies.

// The program then outputs:

//     The force between the bodies.

//     Your program should be able to work with decimals.

#include <iostream>

using namespace std;

int main() {

    const double k = 6.67e-8;
    double first_body_mass, second_body_mass, distance;
    
    cout << "Enter The masses of the first bodies" << endl;
    cin >> first_body_mass;

    cout << "Enter The masses of the second bodies" << endl;
    cin >> second_body_mass;

    cout << "Enter The distance between the bodies" << endl;
    cin >> distance;

    double force = (k * first_body_mass * second_body_mass) / (distance * distance);

    cout << "The force is: " << force;
    
    return 0;
}

// Summary

// The roots of the quadratic equation ax² + bx + c = 0, a ≠ 0 
// are given by the following formula:

// (-b +- √b^2 - 4ab) / 2a

// Quadratic Formula

// In this formula, the term b² - 4ac is called the discriminant. 
// If b² - 4ac = 0, then the equation has a single (repeated) 
// root. If b² - 4ac > 0, the equation has two real roots. 
// If b² - 4ac < 0, the equation has two complex roots.
// Instructions

// Write a program that prompts the user to input the value of:

//     a (the coefficient of x²)
//     b (the coefficient of x)
//     c (the constant term)

// The program then outputs the type of roots of the equation.

// Furthermore, if b² - 4ac ≥ 0, the program should output the
//  roots of the quadratic equation.

// (Hint: Use the function pow from the header file cmath to calculate
//  the square root. Chapter 3 explains how the function pow is used.)

//     Format your output with a decimal precision of 2.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    
    double a, b, c, b_p;

    cout << "Enter a ";
    cin >> a;
    cout << endl;

    cout << "Enter a ";
    cin >> b;
    cout << endl;

    cout << "Enter a ";
    cin >> c;
    cout << endl;

    b_p = pow(b, 2);

    cout << fixed << setprecision(2);

    if(b_p - 4 * a * c == 0)
    {
        cout << "repeated " 
        << (-b + sqrt(b_p - 4 * a * c)) / (2 * a);
    }

    if(b_p - 4 * a * c > 0)
    {
        cout << "real " 
        << (-b + sqrt(b_p - 4 * a * c)) / (2 * a)
        << (-b - sqrt(b_p - 4 * a * c)) / (2 *a );
    }

    if(b_p - 4 * a * c < 0)
    {
        cout << "complex ";
    }

    return 0;
}

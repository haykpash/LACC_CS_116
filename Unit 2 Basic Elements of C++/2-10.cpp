// Instructions

// Write a program that prompts the user to input
//  five decimal numbers.

// The program should then add the five decimal 
// numbers, convert the sum to the nearest integer,
//  and print the result.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double s1, s2, s3, s4, s5, total;

    cout << "Input five decimal numbers" << endl;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    cin >> s4;
    cin >> s5;

    total = s1 + s2 + s3 + s4 + s5;

    cout << round(total);

    return 0;
}
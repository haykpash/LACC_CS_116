// Summary

// In an elementary school, a mixture of equal amounts of nuts 
// and dried fruit is provided during lunch. Suppose that the 
// number of calories in each pound of nuts is 0.70 times the 
// number of calories in each pound of dried fruit.
// Instructions

// Write a program that prompts the user to input:

//     The number of students in the elementary school
//     The number of calories required for each student from the mixture
//     The number of calories in each pound of nuts.

// The program outputs:

//     The amount of nuts and dried fruit needed for the students.

// For simplicity, assume that each student requires the same amount of calories.

#include <iostream>

using namespace std;

int main() {
    
    double students, cal_require, nuts_cal;

    cout << "Enter The number of students " << endl;
    cin >> students;

    cout << "Enter The calories from mixture" << endl;
    cin >> cal_require;

    cout << "Enter The calories nuts " << endl;
    cin >> nuts_cal;

    const double fruit_cal = nuts_cal / 0.7;
    const double num_students = students * cal_require;
    const double total_pound = num_students / ((nuts_cal + fruit_cal) / 2);

    const double fruit_needed = total_pound / 2;
    const double nuts_needed = total_pound / 2;

    cout << fruit_needed;
    cout << nuts_needed;

  return 0;
}

// Instructions

// Write a program that prompts the user to enter the 
// weight of a person in kilograms and outputs the 
// equivalent weight in pounds (Note that 1 kilogram 
// equals 2.2 pounds). Format your output with two 
// decimal places.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    double weight;

    cout << "Enter the weights " << endl;
    cin >> weight;

    cout << fixed << setprecision(2) << endl;

    cout << weight * 2.2;

    return 0;
}

// Instructions

// The population of town A is less than the population of town B. 
// However, the population of town A is growing faster than the 
// population of town B.

// Write a program that prompts the user to enter:

//     1. The population of town A
//     2. The population of town B
//     3. The growth rate of town A
//     4. The growth rate of town B

// The program outputs:

//     After how many years the population of town A will be greater 
//     than or equal to the population of town B
//     The populations of both the towns at that time.

// (A sample input is: Population of town A = 5,000, growth rate of 
// town A = 4%, population of town B = 8,000, and growth rate of town B = 2%.)

#include <iostream>

using namespace std;

int main() {
    
    int pop_A, pop_B, grow_A, grow_B, year = 0;

    cout << "The population of town A: ";
    cin >> pop_A;
    cout << endl;

    cout << "The population of town B: ";
    cin >> pop_B;
    cout << endl;

    cout << "The growth rate of town A: ";
    cin >> grow_A;
    cout << endl;

    cout << "The growth rate of town B: ";
    cin >> grow_B;
    cout << endl;

    while(pop_B > pop_A) {
        pop_A += ((grow_A * pop_A) / 100);
        pop_B += ((grow_B * pop_B) / 100);
        year++;
    }
  
    cout << year << " " << pop_A << " " << pop_B;

  return 0;
}

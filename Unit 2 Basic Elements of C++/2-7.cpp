// Instructions

// Write a program that prompts the user to input the 
// decimal value of a double and outputs the number 
// rounded to the nearest integer.

#include <iostream>
#include <cmath>

using namespace std;

int main() {

  double num;

  cout << "Input a decimal value" << endl;
  cin >> num;
  int rounded = round(num);
  cout << rounded;
  
    return 0;
}
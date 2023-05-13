//  Instructions

// Final Step:

// Write C++ statement(s) that output 
// the values of num1, num2, num3, and average.

// Then compile and run your program by clicking 
// the blue run button on the right side of the screen. 

#include <iostream>
using namespace std;

int main()
{
  double num1, num2, num3, average;

  num1 = 75.35;
  num2 = -35.56;
  num3 = 15.76;

  average = (num1 + num2 + num3) / 3;

  cout << "**********************************\n\n";

  cout << "*    Programming Assignment 1    *\n\n";

  cout << "*     Computer Programming I     *\n\n";

  cout << "*     Author: Hayk *********     *\n\n";

  cout << "*   Due Date: Thursday, Jan. 24  *\n\n";

  cout << "**********************************\n\n";
  
  cout << num1 << "\n" << num2 << "\n" << num3 << "\n" << average;

  return 0;
}
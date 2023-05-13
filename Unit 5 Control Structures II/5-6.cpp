// Instructions

// Write a program that prompts the user to input a 
// positive integer.

// It should then output a message indicating whether 
// the number is a prime number.

// (Note: An even number is prime if it is 2. An odd 
// integer is prime if it is not divisible by any odd 
// integer less than or equal to the square root of 
// the number.)

#include <iostream>

using namespace std;

int main() {
    
    int n;

    cout << "Input a positive integer: ";
    cin >> n;
    cout << endl;

    if(n < 2) cout << "non";
      
    for (int i = 2; i <= n / 2; ++i) {
      if (n % i == 0) {
          cout << "non";
          break;
      }
    }
    cout << "prime";
    
  return 0;
}

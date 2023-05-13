// Instructions

// Write a program that prompts the user to input an 
// integer and then outputs both the individual digits 
// of the number and the sum of the digits.

// For example, it should output the individual digits of:

//     3456 as 3 4 5 6
//     8030 as 8 0 3 0
//     2345526 as 2 3 4 5 5 2 6
//     4000 as 4 0 0 0
//     -2345 as 2 3 4 5

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string str;
    int sum = 0, j = 0;
    
    cout << "Enter an integer ";
    cin >> str;
    cout << endl;

    int len = str.length();
    if(str[0] == '-') j = 1;

    cout << "Individual digits: ";
    
    for(int i = j; i < len; i++) {
        cout << str[i] << ' ';
        int num = str[i] - '0';
        sum += num; 
      }  

    cout << endl;
    cout << "Sum of digits: " << sum << endl;

  return 0;
}

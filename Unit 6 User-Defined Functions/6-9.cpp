// Write a function, reverseDigit, that takes an integer
// as a parameter and returns the number with its digits reversed.
// For example:

//     the value of reverseDigit(12345) is 54321;
//     the value of reverseDigit(5600) is 65;
//     the value of reverseDigit(7008) is 8007;
//     and the value of reverseDigit(–532) is –235.

#include <iostream>
#include <string>

using namespace std;

int reverseDigit(string val);

int main() {

    string value;

    cout << "Enter the value: ";
    cin >> value;
    cout << endl;

    reverseDigit(value);
  
    return 0;
}
  int reverseDigit(string val) 
  {

        string rev;

        for(int i = val.length(); i >= 0; i--) {
            if(val[i] == '-') rev = val[i] + rev;
            rev = rev + val[i];
        }
        cout << rev;
        return 0;
  }
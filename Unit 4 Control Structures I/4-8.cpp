// Instructions

// Write a program that mimics a calculator. The program should take as input:

//     The first integer
//     The second integer
//     The operation to be performed (+, -, *, /)

// It should then output the numbers, the operator, and the result. 
// (For division, if the denominator is zero, output an appropriate
//  message. The message should contain the word "error")

// Some sample outputs follow:

// 3 + 4 = 7
// 13 * 5 = 65

#include <iostream>

using namespace std;

int main() {
    
    int a, b;
    char op = ' ';

    cout << "The first integer ";
    cin >> a;
    cout << endl;

    cout << "The first integer ";
    cin >> b;
    cout << endl;

    cout << "The first integer ";
    cin >> op;
    cout << endl;
    
    (b == 0)    ? cout << "error" :
    (op == '+') ? cout << a << op << b << '=' << a + b :
    (op == '-') ? cout << a << op << b << '=' << a - b :
    (op == '*') ? cout << a << op << b << '=' << a * b : 
                  cout << a << op << b << '=' << a / b ;

    return 0;
}

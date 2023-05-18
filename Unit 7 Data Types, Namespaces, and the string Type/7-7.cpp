// Instructions

// (Fraction calculator) | Write a program that lets the user perform arithmetic 
// operations on fractions. Fractions are of the form a/b, in which _a_ and _b_ 
// are integers and b ≠ 0. Your program must be menu driven, allowing the user 
// to select the operation (+, –, *, or /) and input the numerator and denominator
//  of each fraction. Furthermore, your program must consist of at least the 
//  following functions:

//     Function menu: This function informs the user about the program’s purpose,
//      explains how to enter data, and allows the user to select the operation.
//     Function addFractions: This function takes as input four integers 
//     representing the numerators and denominators of two fractions, adds the
//      fractions, and returns the numerator and denominator of the result. 
//      (Notice that this function has a total of six parameters.)
//     Function subtractFractions: This function takes as input four integers 
//     representing the numerators and denominators of two fractions, subtracts 
//     the fractions, and returns the numerator and denominator of the result. 
//     (Notice that this function has a total of six parameters.)
//     Function multiplyFractions: This function takes as input four integers 
//     representing the numerators and denominators of two fractions, multiplies 
//     the fractions, and returns the numerators and denominators of the result. 
//     (Notice that this function has a total of six parameters.)

//     Function divideFractions: This function takes as input four integers 
//     representing the numerators and denominators of two fractions, divides 
//     the fractions, and returns the numerator and denominator of the result. 
//     (Notice that this function has a total of six parameters.) 
//     Some sample outputs are:

//         3 / 4 + 2 / 5 = 23 / 20
//         2 / 3 * 3 / 5 = 6 / 15

// Your answer need not be in the lowest terms.

#include <iostream>

using namespace std;

void menu();
void addFractions(int, int , int, int, int&, int&);
void subtractFractions(int, int, int, int, int&, int&);
void multiplyFractions(int, int, int, int, int&, int&);
void divideFractions(int, int, int, int, int&, int&);
int lcd(int, int);

int main() {

    int choice, a, b, c, d, num, denom;

    do {

      menu();
      cout << "Enter your choice (1-4): ";
      cin >> choice;

      cout << "Enter the first fraction (numerator and denominator): ";
      cin >> a >> b; 

      cout << "Enter the second fraction (numerator and denominator): ";
      cin >> c >> d;

          switch (choice) {
          case 1:
              addFractions(a, b, c, d, num, denom);
              cout << a << "/" << b << " + " << c << "/" << d << " = " << num << "/" << denom << endl;
              break;
          case 2:
              subtractFractions(a, b, c, d, num, denom);
              cout << a << "/" << b << " - " << c << "/" << d << " = " << num << "/" << denom << endl;
              break;
          case 3:
              multiplyFractions(a, b, c, d, num, denom);
              cout << a << "/" << b << " * " << c << "/" << d << " = " << num << "/" << denom << endl;
              break;
          case 4:
              divideFractions(a, b, c, d, num, denom);
              cout << a << "/" << b << " / " << c << "/" << d << " = " << num << "/" << denom << endl;
              break;
          default:
              cout << "Invalid choice." << endl;
              break;
          }

    } while(choice);

    return 0;
}
void menu()
{
    cout << "Fraction Calculator" << endl;
    cout << "-------------------" << endl;
    cout << "1. Add fractions" << endl;
    cout << "2. Subtract fractions" << endl;
    cout << "3. Multiply fractions" << endl;
    cout << "4. Divide fractions" << endl;
}

void addFractions(int a, int b, int c, int d, int& num, int& denom) 
{
    num = a * d + b * c;
    denom = b * d;
}

void subtractFractions(int a, int b, int c, int d, int& num, int& denom) 
{
    num = a * d - b * c;
    denom = b * d;
}

void multiplyFractions(int a, int b, int c, int d, int& num, int& denom)
{
    num = a * c;
    denom = b * d;
}

void divideFractions(int a, int b, int c, int d, int& num, int& denom) 
{
    num = a * d;
    denom = b * c;
}

int lcd(int a, int b) 
{
    if (b == 0) {
        return a;
    }
    return lcd(b, a % b);
}

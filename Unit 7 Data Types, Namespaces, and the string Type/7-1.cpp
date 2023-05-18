
// 1. Define an enumeration type triangleType that has the values 
// scalene, isosceles, equilateral, and noTriangle.

// 2. Write a function triangleShape that takes as parameters three
//   numbers, each of which represents the length of a side of the 
//   triangle. The function should return the shape of the triangle.
//   (Note: In a triangle, the sum of the lengths of any two sides 
//   is greater than the length of the third side.)
  
// 3. Write a program that prompts the user to input the length of the
//   sides of a triangle and outputs the shape of the triangle.

#include <iostream>

using namespace std;

enum triangleType {scalene, isosceles, equilateral, noTriangle};
triangleType triangleShape(double a, double b, double c);

int main() {

    double a, b, c;
    cout << "Enter side a: ";
    cin >> a;
    
    cout << "Enter side b: ";
    cin >> b;

    cout << "Enter side c: ";
    cin >> c;

    triangleType triangle = triangleShape(a, b, c);

    switch (triangle) {
      case scalene:
          cout << "The triangle is scalene.\n";
          break;
      case isosceles:
          cout << "The triangle is isosceles.\n";
          break;
      case equilateral:
          cout << "The triangle is equilateral.\n";
          break;
      case noTriangle:
          cout << "The triangle is noTriangle.\n";
          break;
    }
    return 0;
}
triangleType triangleShape(double a, double b, double c) {
    if (a + b <= c || a + c <= b || b + c <= a) {
        return noTriangle;
    }
    else if (a == b && b == c) {
        return equilateral;
    }
    else if (a == b || b == c || a == c) {
        return isosceles;
    }
    else {
        return scalene;
    }
}

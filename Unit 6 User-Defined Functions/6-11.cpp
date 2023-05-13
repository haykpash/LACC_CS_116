// Summary

// The following formula gives the distance between two points,
//  (x₁,y₁) and (x₂,y₂) in the Cartesian plane:

// √((x2−x1)2+(y2−y1)2(x2​−x1​)2+(y2​−y1​))^2

// Given the center and a point on the circle, you can use this 
// formula to find the radius of the circle.
// Instructions

// Write a program that prompts the user to enter the center and a 
// point on the circle. The program should then output the circle’s 
// radius, diameter, circumference, and area. Your program must have
//  at least the following functions:

//     distance: This function takes as its parameters four numbers
//      that represent two points in the plane and returns the 
//      distance between them.
//     radius: This function takes as its parameters four numbers
//      that represent the center and a point on the circle, calls
//       the function distance to find the radius of the circle, 
//       and returns the circle’s radius.
//     circumference: This function takes as its parameter a number
//      that represents the radius of the circle and returns the 
//      circle’s circumference. (If r is the radius, the circumference is 2πr.)
//     area: This function takes as its parameter a number that 
//     represents the radius of the circle and returns the circle’s
//      area. (If r is the radius, the area is πr².) Assume that π = 3.1416.

//     Format your output with setprecision(2) to ensure the proper 
//     number of decimals for testing!

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double distance(double val1, double val2, double val3, double val4);
double radius(double val);
double circumference(double val);
double area(double val1);

const double PI = 3.1416;

int main() {
    
    double x_1, y_1, x_2, y_2;

    cout << "Enter the center: ";
    cin >> x_1;
    cout << endl;

    cout << "Enter the point: ";
    cin >> y_1;
    cout << endl;

    cout << "Enter the center: ";
    cin >> x_2;
    cout << endl;

    cout << "Enter the center: ";
    cin >> y_2;
    cout << endl;

    cout << fixed << setprecision(2);

    double rads = distance(x_1, y_1, x_2, y_2) ;

    cout << distance(x_1, y_1, x_2, y_2);;

    cout << radius(rads);

    cout << circumference(rads) << endl;

    cout << area(rads) << endl;
    
    return 0;
}
  double distance(double x_1, double y_1, double x_2, double y_2) {
      return sqrt(pow((x_2 - x_1), 2) + pow((y_2 - y_1), 2));
  }
  double radius(double val) {
      return (val * 2);
  }
  double circumference(double val) {
      return (val * 2) * PI;
  }
  double area(double val) {
      return (val * val) * PI;
  }

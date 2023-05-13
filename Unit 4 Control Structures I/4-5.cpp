// Instructions

// In a right triangle, the square of the length of one side 
// is equal to the sum of the squares of the lengths of the 
// other two sides.

// Write a program that prompts the user to enter the lengths 
// of three sides of a triangle and then outputs a message 
// indicating whether the triangle is a right triangle.

// If the triangle is a right triangle, output It is a right angled triangle

// If the triangle is not a right triangle, output It is not a right angled triangle

#include <iostream>

using namespace std;

int main() {
    
    int l_1, l_2, l_3;

    cout << "Enter lengths " << endl;
    cin >> l_1 >> l_2 >> l_3;

          (((l_1 * l_1) + (l_2 * l_2)) == (l_3 * l_3)) 
       || (((l_1 * l_1) + (l_3 * l_3)) == (l_2 * l_2)) 
       || (((l_2 * l_2) + (l_3 * l_3)) == (l_1 * l_1)) 
        ? cout << "It is a right angled triangle" 
        : cout << "It is not a right angled triangle";

    return 0;
}

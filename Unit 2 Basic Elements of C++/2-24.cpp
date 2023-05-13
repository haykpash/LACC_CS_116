// Instructions

// A piece of wire is to be bent in the form of a rectangle 
// to put around a picture frame. The length of the picture 
// frame is 1.5 times the width.

// Write a program that prompts the user to input:

//     The length of the wire

// The program then outputs:

//     The length and width of the picture frame.

#include <iostream>

using namespace std;

int main() {

    double wire;
    
    cout << "Enter The length of the wire" << endl;
    cin >> wire;

    const double w = wire / 5;
    const double l = w * 1.5;

    cout << l << w << endl;

  return 0;
}

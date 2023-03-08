// Instructions

// Write a program that prompts the user to enter five 
// test scores and then prints the average test score. 
// Indicate the average test score by printing it to the 
// terminal using the following format:

// Your average test score is: X

// (Assume that the test scores are decimal numbers.)

#include <iostream>

using namespace std;

int main() {

    double s1, s2, s3, s4, s5, total;
    
    cout << "Enter five test scores" << endl;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    cin >> s4;
    cin >> s5;

    total = (s1 + s2 + s3 + s4 + s5) / 5;

    cout << "Your average test score is: " << total;
    
    return 0;
}

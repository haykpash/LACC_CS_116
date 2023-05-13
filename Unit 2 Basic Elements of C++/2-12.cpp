// Instructions

// Write a C++ program that:

//     Prompts the user to input the elapsed time for an event in seconds.
//     Outputs the elapsed time in hours, minutes, and seconds.

// (For example, if the elapsed time is 9,630 seconds, then the output is 2:40:30.)

#include <iostream>

using namespace std;

int main() {
    
    int h, m, s, t;

    cout << "Input the elapsed time for an event in seconds\n";
    cin >> t;

    h = t / 3600;
    m = (t % 3600) / 60;
    s = (t % 3600) % 60;

    cout << h << ":" << m << ":" << s;

    return 0;
}
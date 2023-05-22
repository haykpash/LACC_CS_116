// Instructions

// Write a program that reads a file consisting of students’ 
// test scores in the range 0–200. It should then determine 
// the number of students having scores in each of the 
// following ranges:
// 0–24, 25–49, 50–74, 75–99, 100–124, 125–149, 150–174, and 175–200.
// Output the score ranges and the number of students. (Run your program
//  with the following input data:

// 76, 89, 150, 135, 200, 76, 12, 100, 150, 28, 178, 189, 167, 
// 200, 175, 150, 87, 99, 129, 149, 176, 
// 200, 87, 35, 157, 189

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    
    ifstream inFile;
    
    inFile.open("Ch8_Ex4Data.txt");

    int score;
    int scores [8] = {0};

    while(inFile >> score) {
      
        if (score >= 0 && score <= 24) {
            scores[0]++;
        } else if (score >= 25 && score <= 49) {
            scores[1]++;
        } else if (score >= 50 && score <= 74) {
            scores[2]++;
        } else if (score >= 75 && score <= 99) {
            scores[3]++;
        } else if (score >= 100 && score <= 124) {
            scores[4]++;
        } else if (score >= 125 && score <= 149) {
            scores[5]++;
        } else if (score >= 150 && score <= 174) {
            scores[6]++;
        } else if (score >= 175 && score <= 200) {
            scores[7]++;
        }
    }

    cout << "0 - 24 " << scores[0] << endl;
    cout << "25 - 49 " << scores[1] << endl;
    cout << "50 - 74 " << scores[2] << endl;
    cout << "75 - 99 " << scores[3] << endl;
    cout << "100 - 124 " << scores[4] << endl;
    cout << "125 - 149 " << scores[5] << endl;
    cout << "150 - 174 " << scores[6] << endl;
    cout << "175 - 200 " << scores[7] << endl;

    return 0;
}

// Summary

// Jason, Samantha, Ravi, Sheila, and Ankit are preparing for an 
// upcoming marathon. Each day of the week, they run a certain 
// number of miles and write them into a notebook. At the end of 
// the week, they would like to know the number of miles run each
//  day and average miles run each day.
// Instructions

// Write a program to help them analyze their data. Your program 
// must contain parallel arrays: an array to store the names of 
// the runners and a two-dimensional array of five rows and seven
//  columns to store the number of miles run by each runner each 
//  day. Furthermore, your program must contain at least the 
//  following functions:

//     a function to read and store the runners’ names and the 
//     numbers of miles run each day;
//     a function to calculate the average number of miles run 
//     each day;
//     and a function to output the results. (You may assume that
//      the input data is stored in a file and each line of data 
//      is in the following form: runnerName milesDay1 milesDay2 
//      milesDay3 milesDay4 milesDay5 milesDay6 milesDay7.)

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

const int RUNNERS = 5;
const int DAYS = 7;

void getData(ifstream& inf, string n[], double runData[][8], int count);
void calculateAverage(double runData[][8], int count);
void print(string n[], double runData[][8], int count);
  
int main() {

    string runners[RUNNERS];
    double runData[RUNNERS][DAYS + 1];
    int count = 0;

    ifstream inFile;

    inFile.open("ch8_Ex12Data.txt");

    if (!inFile) {
      cout << "Error opening input file." << endl;
      return 1;
    }
    getData(inFile, runners, runData, count);
    calculateAverage(runData, count);
    print(runners, runData, count);

	return 0;
}
void getData(ifstream& inf, string n[], double runData[][8], int count) {

  while(inf >> n[count]) {

      double sum = 0;

      for (int i = 0; i < DAYS; i++) {

          inf >> runData[count][i];
          sum += runData[count][i];
      }
      runData[count][DAYS] = sum;
      count++;
  }
}
void calculateAverage(double runData[][8], int count) {

    for (int i = 0; i < DAYS; i++) {

        double sum = 0;

        for (int j = 0; j < count; j++) {

          sum += runData[j][i];
        }
      runData[RUNNERS][i] = sum / count;
    }
    double total = 0;

    for (int i = 0; i < count; i++) {

      total += runData[i][DAYS];
    }
  runData[RUNNERS][DAYS] = total / count;
}
void print(string n[], double runData[][8], int count) {

    cout << "Name     Day 1 Day 2 Day 3 Day 4 Day 5 Day 6 Day 7 Averge" << endl;

     for(int i = 0; i < 5; i++) {

       cout << setw(8) << left << n[i] << " ";

       for(int j = 0; j < 8; j++) {

        cout << fixed << setprecision(2) << setw(5) << runData[i][j] << " ";
      }
    cout << endl;
  }
}

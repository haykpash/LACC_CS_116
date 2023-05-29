// Instructions

// Write a program that reads students’ names followed by their test scores.
//  The program should output each student’s name followed by the test scores 
//  and the relevant grade. It should also find and print the highest test 
//  score and the name of the students having the highest test score.

// Student data should be stored in a struct variable of type studentType, 
// which has four components: studentFName and studentLName of type string,
//  testScore of type int (testScore is between 0 and 100), and grade of 
//  type char. Suppose that the class has 20 students. Use an array of 20
//   components of type studentType. Your program must contain at least the
//    following functions:

//     A function to read the students’ data into the array.
//     A function to assign the relevant grade to each student.
//     A function to find the highest test score.
//     A function to print the names of the students having the highest 
//     test score.

// Your program must output each student’s name in this form: last name 
// followed by a comma, followed by a space, followed by the first name; 
// the name must be left justified. Moreover, other than declaring the 
// variables and opening the input and output files, the function main 
// should only be a collection of function calls.

// Your program should accept no input and save the output to Ch9_Ex2Out.txt.

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

struct studentType {

    string studentFName;
    string studentLName;
    int testScore;
    char grade;

};

void getData(studentType arr[]);
void assignGrade(studentType arr[]);
int highScore(studentType arr[]);
void print(studentType arr[], int high);

int main() {

    studentType arr[20];
     
    getData(arr);
    assignGrade(arr); 
    int high = highScore(arr);
    print(arr, high);

    return 0;
}
void getData(studentType arr[]) {
     
     ifstream inFile;
     inFile.open("Ch9_Ex2Data.txt");

     if (!inFile) {
        cout << "Error opening input file." << endl;
     exit(1);
     }

     for(int i = 0; i < 20; i++) {

        inFile  >> arr[i].studentFName >> arr[i].studentLName >> arr[i].testScore;   
     }
     inFile.close();
}
void assignGrade(studentType arr[]) {

    for (int i = 0; i < 20; i++) {
        if (arr[i].testScore >= 90) {
            arr[i].grade = 'A';
        } else if (arr[i].testScore >= 80) {
            arr[i].grade = 'B';
        } else if (arr[i].testScore >= 70) {
            arr[i].grade = 'C';
        } else if (arr[i].testScore >= 60) {
            arr[i].grade = 'D';
        } else {
            arr[i].grade = 'F';
        }
    }
}
int highScore(studentType arr[]) {

    int s = 0;

    for(int i = 0; i < 20; i++) {

      if(arr[i].testScore > s) {
        s = arr[i].testScore;
      }
    }
    return s;
}
void print(studentType arr[], int high) {

    ofstream outFile;
    outFile.open("Ch9_Ex2Out.txt");

    outFile << "Name             Score        Grade" << endl; 
    outFile << "-----------------------------------" << endl;

    for(int i = 0; i < 20; i++) {
      outFile << left << setw(20) << arr[i].studentLName + ", " + arr[i].studentFName
              << setw(12) << arr[i].testScore << " " << arr[i].grade << endl; 
    }
     outFile << "-----------------------------------" << endl;

    for(int i = 0; i < 20; i++) {
      if(arr[i].testScore == high) {
         outFile << arr[i].studentFName << " ";
      }
    }
    outFile.close();
}



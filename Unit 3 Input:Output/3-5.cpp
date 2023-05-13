// Summary

// Three employees in a company are up for a special pay increase.
//  You are given a file, say Ch3_Ex5Data.txt, with the following data:

// Miller Andrew 65789.87 5
// Green Sheila 75892.56 6
// Sethi Amit 74900.50 6.1

// Each input line consists of an employee’s last name, first name,
//  current salary, and percent pay increase.

// For example, in the first input line, the last name of the 
// employee is Miller, the first name is Andrew, the current salary
//  is 65789.87, and the pay increase is 5%.

// Instructions

// Write a program that reads data from a file specified by the
//  user at runtime (i.e. your program should accept the filename
//   as user input) and stores the output in the file 
//   Ch3_Ex5Output.dat. To test your program, use the Ch3_Ex5Data.txt file.

//     Your program will not pass all checks if it does not accept a 
//     filename as input from the user.

// For each employee, the data must be output in the following form:
// firstName lastName updatedSalary.

// Format the output of decimal numbers to two decimal places.

//     Since your program handles currency, make sure to use a data 
//     type that can store decimals.

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
//#include <sstream>


using namespace std;

int main() {

    string filename;
    
    cout << "Enter filename: ";
    cin >> filename;

    ifstream file(filename);

    // Declare file stream
    ifstream inFile;
    ofstream outFile;

    // Open the file
    inFile.open(filename);
    outFile.open("Ch3_Ex5Output.dat");

    string firstName, lastName;
    double salery, updatedSalary, inc;

    while(inFile >> lastName >> firstName >> salery >> inc)
        {
          updatedSalary = (inc / 100 * salery) + salery;
          outFile << fixed << setprecision(2);
          outFile << firstName << " " << lastName << " " << updatedSalary << endl;
        }
     
     // Close file
     inFile.close();
     outFile.close();

    return 0;
}


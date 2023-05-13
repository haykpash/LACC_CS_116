// Instructions

// The file inData.txt is provided for you with the following data:

// Giselle Robinson Accounting
// 5600 5 30
// 450 9
// 75 1.5

// Run your program, and ensure that outData.txt is created and has the following lines:

// Name: Giselle Robinson, Department: Accounting
// Monthly Gross Salary: $5600.00, Monthly Bonus: 5.00%, Taxes: 30.00%
// Paycheck: $4116.00

// Distance Traveled: 450.00 miles, Traveling Time: 9.00 hours
// Average Speed: 50.00 miles per hour

// Number of Coffee Cups Sold: 75, Cost: $1.50 per cup
// Sales Amount = $112.50

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>


using namespace std;

int main() {

    // Declare file stream
    ifstream inFile;
    ofstream outFile;

    // Open the file
    inFile.open("inData.txt");
    outFile.open("outData.txt");

    string name, lastName, depart;

    double paycheck, bonus, salery, tax;
    double distance, t_time, speed;
    double cups, cost, sales;

    cout << fixed << setprecision(2);
    //getline(inFile, name);

    inFile >> name >> lastName >> depart;
    inFile >> salery >> bonus >> tax;
    inFile >> distance >> t_time;
    inFile >> cups >> cost;

    paycheck = salery + ((salery * bonus) / 100) 
             - ((salery + (salery * bonus / 100)) * 0.30);

    speed = distance / t_time;

    sales = cups * cost;

    outFile << fixed << setprecision(2);

    outFile << "Name: " << name << " " << lastName << ", " 
            << "Department: " << depart << "\n"
            << "Monthly Gross Salary: $" << salery << ", " 
            << "Monthly Bonus: " << bonus << "%, Taxes: " 
            << tax << "%\n"  
            << "Paycheck: $" << paycheck << "\n\n"
            << "Distance Traveled: " << distance << " miles, Traveling Time: "
            << t_time << " hours\nAverage Speed: " << speed << " miles per hour\n\n"
            << "Number of Coffee Cups Sold: " << setprecision(0) << cups << ", Cost: $" 
            << setprecision(2) << cost << " per cup\n"
            << "Sales Amount = $" << sales;

    // Close file
    inFile.close();
    outFile.close();

  return 0;
}

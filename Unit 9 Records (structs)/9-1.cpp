// Instructions

// Assume the definition of Exercise 2, which defines the 
// struct computerType. Write a program that declares a 
// variable of type computerType, prompts the user to input 
// data about a computer, and outputs the computer’s data.




// Example input and output is shown below:

// Enter the name of the manufacturer: McPC                             

// Enter the model of the computer: 1000                                

// Enter processor type: Intel GFX                                      

// Enter the size of RAM (in GB): 8                                     

// Enter the size of hard drive (in GB): 1000                           

// Enter the year the computer was built: 2016                          

// Enter the price: 1200                                                

// Manufacturer: McPC                                                   
// Model: 1000                                                          
// Processor: Intel GFX                                                 
// Ram: 8                                                               
// Hard Drive Size: 1000                                                
// Year Built: 2016                                                     
// Price: $1200.00 


// Instructions from Exercise 2 have been posted below for your convenience.


// Exercise 2

// Define a struct computerType to store the following data 
// about a computer: Manufacturer (string), model type 
// (string), processor type (string), ram (int) in GB, hard 
// drive size (int) in GB, year when the computer was built 
// (int), and the price (double).




#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct computerType {

    string manufacturer;
    string modelType;
    string processorType;
    int ram;
    int hardDriveSize;
    int yearBuilt;
    double price;
};

int main() {
    
    computerType data;

    cout << "Enter the name of the manufacturer: ";
    getline(cin, data.manufacturer);
    cout << endl;

    cout << "Enter the model of the computer: ";
    getline(cin, data.modelType);
    cout << endl;

    cout << "Enter processor type: ";
    getline(cin, data.processorType);
    cout << endl;

    cout << "Enter the size of RAM (in GB): ";
    cin >> data.ram;
    cout << endl;

    cout << "Enter the size of hard drive (in GB): ";
    cin >> data.hardDriveSize;
    cout << endl;

    cout << "Enter the year the computer was built: ";
    cin >> data.yearBuilt;
    cout << endl;

    cout << "Enter the price: ";
    cin >> data.price;
    cout << endl;

    cout << "Manufacturer: " << data.manufacturer << endl;
    cout << "Model: " << data.modelType << endl;
    cout << "Processor: " << data.processorType << endl;
    cout << "Ram: " << data.ram << endl;
    cout << "Hard Drive Size: " << data.hardDriveSize << endl;
    cout << "Year Built: " << data.yearBuilt << endl;
    cout << fixed << setprecision(2) << endl;
    cout << "Price: $" << data.price << endl;  

    return 0;
}

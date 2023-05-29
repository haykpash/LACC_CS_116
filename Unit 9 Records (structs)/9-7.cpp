// Instructions

// Write a program that declares a struct to store the data of a football 
// player (player’s name, player’s position, number of touchdowns, number 
// of catches, number of passing yards, number of receiving yards, and the
//  number of rushing yards).

// Declare an array of 10 components to store the data of 10 football players.

// Your program must contain a function to input data and a function to output
//  data. Add functions to search the array to find the index of a specific 
//  player, and up-date the data of a player. (You may assume that the input
//   data is stored in a file.) Before the program terminates, give the user 
//   the option to save data in a file. Your program should be menu driven, 
//   giving the user various choices.

// An example of the program is shown below: 

// Select one of the following options:                                 
// 1: To print a player's data                                          
// 2: To print the entire data                                          
// 3: To update a player's touch downs                                  
// 4: To update a player's number of catches                            
// 5: To update a player's passing yards                                
// 6: To update a player's receiving yards                              
// 7: To update a player's rushing yards                                
// 99: To quit the program                                              
// 1                                                                    

// Enter player's name: Bill                                            

// Name: BillPosition: Quarter_Back;  Touch Downs: 70;  Number of Catche
// s: 0;  Passing Yards: 8754;  Receiving Yards: 0;  Rushing Yards: 573  

// Select one of the following options:                                 
// 1: To print a player's data                                          
// 2: To print the entire data                                          
// 3: To update a player's touch downs                                  
// 4: To update a player's number of catches                            
// 5: To update a player's passing yards                                
// 6: To update a player's receiving yards                              
// 7: To update a player's rushing yards                                
// 99: To quit the program                                              
// 99                                                                   

// Would you like to save data: (y,Y/n,N) N

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cctype>

using namespace std;

struct players {

     string name;
     string position;
     int touchdowns;
     int catches;
     int passing;
     int receiving;
     int rushing;
};

void getDate(players arr[]);
void printData(players arr[]);
int search(players arr[], string name);
void update(players arr[], string name, int choice, int idx);
void outData(players arr[]);

int main() {

    players arr[10];
    int choice, idx;
    string name;
    char save;

    getDate(arr);

     do { 
        
        cout << "Select one of the following options:" << endl; 
        cout << "1: To print a player's data " << endl;
        cout << "2: To print the entire data" << endl;
        cout << "3: To update a player's touch downs " << endl;
        cout << "4: To update a player's number of catches" << endl; 
        cout << "5: To update a player's passing yards" << endl; 
        cout << "6: To update a player's receiving yards" << endl;
        cout << "7: To update a player's rushing yards" << endl;
        cout << "99: To quit the program" << endl;
        cin >> choice;
        cout << endl;

      switch (choice) {
          case 1:
            cout << "Enter player's name: ";
            cin >> name;
            cout << endl;
            idx = search(arr, name);
            cout << "Name: " << arr[idx].name << endl;
            cout << "Position: " << arr[idx].position << endl;  
            cout << "Touch Downs: " << arr[idx].touchdowns << endl; 
            cout << "Number of Catches: " << arr[idx].catches << endl; 
            cout << "Passing Yards: " << arr[idx].passing << endl; 
            cout << "Receiving Yards: " << arr[idx].receiving << endl;  
            cout << "Rushing Yards: " << arr[idx].rushing << endl; 
            cout << endl;
              break;
          case 2:
            printData(arr);
              break;
          case 3:
            cout << "Enter player's name: ";
            cin >> name;
            idx = search(arr, name);
            cout << endl;
            update(arr, name, choice, idx);
              break;
          case 4:
            cout << "Enter player's name: ";
            cin >> name;
            idx = search(arr, name);
            cout << endl;
            update(arr, name, choice, idx);
              break;
          case 5:
            cout << "Enter player's name: ";
            cin >> name;
            idx = search(arr, name);
            cout << endl;
            update(arr, name, choice, idx);
              break;
          case 6:
            cout << "Enter player's name: ";
            cin >> name;
            idx = search(arr, name);
            cout << endl;
            update(arr, name, choice, idx);
              break;
          case 7:
            cout << "Enter player's name: ";
            cin >> name;
            idx = search(arr, name);
            cout << endl;
            update(arr, name, choice, idx);
              break;
          case 99:
              break;
          default:
              cout << "Invalid choice." << endl;
              return 1;
        }
        
     } while(choice && choice != 99);

      cout << "Would you like to save data: ";
      cin >> save;

      if(save == 'Y' || save == 'y') {
        outData(arr);
      } else {
        exit(0);
      }

    return 0;
}
void getDate(players arr[]) {

     ifstream inFile;
     inFile.open("Ch9_Ex7Data.txt");

     if (!inFile) {
        cout << "Error opening input file." << endl;
     exit(1);
     }

     for(int i = 0; i < 10; i++) {

        inFile  >> arr[i].name 
                >> arr[i].position 
                >> arr[i].touchdowns   
                >> arr[i].catches   
                >> arr[i].passing   
                >> arr[i].receiving   
                >> arr[i].rushing;    
     }
     inFile.close();
}
int search(players arr[], string name) {

    int idx;

    for(int i = 0; i < 10; i++) {

      if(arr[i].name == name) {
         idx =  i;
       } 
    }
    return idx;
}
void printData(players arr[]) {

    for(int i = 0; i < 10; i++) {

          cout << "Name: " << arr[i].name << endl;
          cout << "Position: " << arr[i].position << endl;  
          cout << "Touch Downs: " << arr[i].touchdowns << endl; 
          cout << "Number of Catches: " << arr[i].catches << endl; 
          cout << "Passing Yards: " << arr[i].passing << endl; 
          cout << "Receiving Yards: " << arr[i].receiving << endl;  
          cout << "Rushing Yards: " << arr[i].rushing << "\n\n";  
    }
}
void update(players arr[], string name, int choice, int idx) {
       int val;
       switch (choice) {
         case 3:
           cout << "Enter player's touch downs: ";
           cin >> val;
           arr[idx].touchdowns += val;
           cout << endl;
           break;
         case 4:
           cout << "Enter player's number of catches: ";
           cin >> val;
           arr[idx].catches += val;
           cout << endl;
           break;
         case 5:
           cout << "Enter player's passing yards: ";
           cin >> val;
           arr[idx].passing += val;
           cout << endl;
           break;
         case 6:
           cout << "Enter player's receiving yards: ";
           cin >> val;
           arr[idx].receiving += val;
           cout << endl;
           break;
         case 7:
           cout << "Enter player's rushing yards: ";
           cin >> val;
           arr[idx].rushing += val;
           cout << endl;
           break;
       }
}
void outData(players arr[]) {

    ofstream outFile;

    outFile.open("Ch9_Ex7Out.txt");

    for(int i = 0; i < 10; i++) {

    outFile << arr[i].name << " " 
            << arr[i].position << " "   
            << arr[i].touchdowns << " "  
            << arr[i].catches << " "  
            << arr[i].passing << " "   
            << arr[i].receiving << " "    
            << arr[i].rushing << endl; 
    }
    outFile.close();
}
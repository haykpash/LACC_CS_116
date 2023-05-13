// Instructions

// Write a program that prints the day number of the year, 
// given the date in the form month-day-year. For example, 
// if the input is 1-1-2006, the day number is 1; if the 
// input is 12-25-2006, the day number is 359. The program
//  should check for a leap year. A year is a leap year if
//  it is divisible by 4, but not divisible by 100. For
//   example, 1992 and 2008 are divisible by 4, but not by 
//   100. A year that is divisible by 100 is a leap year if
//    it is also divisible by 400. For example, 1600 and 2000 
//    are divisible by 400. However, 1800 is not a leap year 
//    because 1800 is not divisible by 400.

#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    
    string date;

    cout << "Enter the date: ";
    cin >> date;
    cout << endl;

    regex reg("([0-9]{1,2})(-)([0-9]{1,2})(-)([0-9]{4})");
    smatch match;
    regex_search(date, match, reg);

    int month = stoi(match[1]);
    int day = stoi(match[3]);
    int year = stoi(match[5]);

    int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int num = day;

    if(month > 1) {
      for(int i = 0; i < month - 1; i++) {
        num += arr[i];
      }
    }
    if(year % 400 == 0 && year % 100 == 0) num++;

    cout << num;
    
    return 0;
}

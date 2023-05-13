// Instructions

// Write a C++ statement that multiplies the value of num1 by 2, 
// adds the value of num2 to it, and then stores the result in newNum.

// Write a C++ statement that outputs the value of newNum.

int main()
{
    //variable declaration
    const int SECRET = 11;
    const double RATE = 12.50;
    int num1, num2, newNum;
    string name;
    double hoursWorked, wages;

    //executable statements
    cout << " Write two integers" << endl;
    cin >> num1;
    cin >> num2;

    cout << "The value of num1 = " << num1 
    <<" and the value of num2 = " << num2 <<".\n";

    newNum = (num1 * 2) + num2;
    
    cout << "The new value of newNum = " << newNum << endl;

    newNum += SECRET;

    cout << "The new value of newNum = " << newNum << endl;

    cout << "Enter a last name:" << endl;
    cin >> name;

    cout << "Enter a decimal number between 0 and 70:" << endl;
    cin >> hoursWorked;

    wages = RATE * hoursWorked;

    cout << "Name: " << name << endl;
    cout << "Pay Rate: $" << RATE << endl;
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Salary: $" << wages << endl;

    //return statement
    return 0;
}

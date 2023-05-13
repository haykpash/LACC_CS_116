// Instructions

// To make a profit, a local store marks up the prices of its items by a certain percentage.

// Write a C++ program that reads:

//     The original price of the item sold
//     The percentage of the marked-up price
//     The sales tax rate.

// The program then outputs:

//     The original price of the item
//     The percentage of the mark-up
//     The store’s selling price of the item
//     The sales tax rate
//     The sales tax
//     The final price of the item.
//         (The final price of the item is the selling price plus the sales tax.)

//     Since your program handles currency, make sure to use a data type that can store decimals.

#include <iostream>

using namespace std;

int main() {
    
    double original_price, percentage, sales_tax_rate;

    cout << "Enter original price" << endl;
    cin >> original_price;

    cout << "Enter percentage of the marked-up price" << endl;
    cin >> percentage;

    cout << "Enter sales tax rate" << endl;
    cin >> sales_tax_rate;

    cout << original_price ;
    cout << percentage << endl;
    cout << original_price + (original_price * percentage) / 100 << endl;
    cout << sales_tax_rate<< endl;
    cout << ((original_price + (original_price * percentage) / 100)  * sales_tax_rate) / 100 << endl;
    cout << (original_price + ((original_price * percentage) / 100)) + ((original_price + (original_price * percentage) / 100)  * sales_tax_rate) / 100 << endl;

    return 0;
}
// Summary

// Cindy uses the services of a brokerage firm to buy and sell stocks.
//  The firm charges 1.5% service charges on the total amount for each 
//  transaction, buy or sell. When Cindy sells stocks, she would like to
//   know if she gained or lost on a particular investment.
// Instructions

// Write a program that allows Cindy to input:

//     The purchase price of each share
//     The selling price of each share
//     The number of shares sold

// The program outputs:

//     The total amount invested
//     The total amount received from selling
//     The total service charges
//     Amount gained or lost

// An example program is shown below:

// Enter the buying price of each share: 13.23

// Enter the selling price of each share: 14.00

// Enter the number of shares sold: 43

// Total amount invested: $ 577.423
// Total amount received: $ 592.97
// Total service charges: $ 17.5633
// Amount gained or lost: $15.5466

//     Since your program handles currency, make sure to use a data 
//     type that can store decimals.

#include <iostream>

using namespace std;

int main() {

    double purchase_price, selling_price, sold;

    cout << "Enter the buying price of each share:" << endl;
    cin >> purchase_price;

    cout << "Enter the selling price of each share:" << endl;
    cin >> selling_price;

    cout << "Enter the number of shares sold:" << endl;
    cin >> sold;

    const double rate = 0.015;
    double invested = (purchase_price + (purchase_price * rate)) * sold;
    double received = (selling_price - (selling_price * rate)) * sold;
    double service_charges = rate * ((purchase_price * sold) + (selling_price * sold));
    double gained_lost = received - invested;
    

    cout << "Total amount invested: " << invested << endl;
    cout << "Total amount received: " << received << endl;
    cout << "Total service charges: " << service_charges << endl;
    cout << "Amount gained or lost: " << gained_lost << endl;

    return 0;
}

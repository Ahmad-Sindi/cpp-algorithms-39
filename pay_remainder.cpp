// Algorithm Challenge
// 39 - Pay Remainder
// This program calculates how much money the user still owes or should receive back.

#include <iostream>
using namespace std;

int main()
{
    float total_Bill, total_Paid, remainder;

    // Ask the user for the total bill
    cout << "Enter total bill: ";
    cin >> total_Bill;

    // Ask the user how much they paid
    cout << "Enter total paid amount: ";
    cin >> total_Paid;

    // Calculate the remainder (positive = change, negative = still owed)
    remainder = total_Paid - total_Bill;

    // Display results based on payment situation
    if (remainder > 0)
    {
        cout << "You should receive back: " << remainder << endl;
    }
    else if (remainder < 0)
    {
        cout << "You still owe: " << -remainder << endl;
    }
    else
    {
        cout << "You paid the exact amount. No remainder." << endl;
    }

    return 0;
}

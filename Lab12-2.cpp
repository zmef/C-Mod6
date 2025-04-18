//Lab12-2.cpp - displays the shipping charge based on quantity
//Created/revised by Zac Fosdyck on 04/18/2025

#include <iostream>
using namespace std;

int main()
{
    int shipCharges[3][2] = {
        {50, 20},
        {100, 10},
        {999999, 0}
    };

    int numOrdered;

    cout << "Enter number ordered (0 or negative to quit): ";
    cin >> numOrdered;

    while (numOrdered > 0)
    {
        int rowSub = 0;
        while (rowSub < 3 && numOrdered > shipCharges[rowSub][0])
            rowSub++;

        cout << "Shipping charge for quantity " << numOrdered << " is $"
             << shipCharges[rowSub][1] << "\n\n";

        cout << "Enter number ordered (0 or negative to quit): ";
        cin >> numOrdered;
    }

    return 0;
}

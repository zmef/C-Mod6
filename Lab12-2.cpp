//Lab12-2.cpp - displays the shipping charge based on quantity
//Created/revised by Zac Fosdyck on 04/18/2025

#include <iostream>
#include <limits> // For numeric_limits
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

    // Input validation for non-numeric input
    while (cin.fail())
    {
        cout << "Invalid input. Please enter a valid number: ";
        cin.clear(); // Clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cin >> numOrdered;
    }

    while (numOrdered > 0)
    {
        int rowSub = 0;
        while (rowSub < 3 && numOrdered > shipCharges[rowSub][0])
        {
            rowSub++;
        }

        // Output the shipping charge
        cout << "Shipping charge for quantity " << numOrdered << " is $"
             << shipCharges[rowSub][1] << "\n\n";

        // Prompt for the next input
        cout << "Enter number ordered (0 or negative to quit): ";
        cin >> numOrdered;

        // Input validation for non-numeric input
        while (cin.fail())
        {
            cout << "Invalid input. Please enter a valid number: ";
            cin.clear(); // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cin >> numOrdered;
        }
    }

    return 0;
}

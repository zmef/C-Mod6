// Intermediate23.cpp - Calculates average high and low temperatures for 7 days
// Created/revised by Zac Fosdyck on 04/18/2025

#include <iostream>
#include <iomanip>
#include <limits> // For numeric_limits
using namespace std;

int main()
{
    const int DAYS = 7;
    int temperatures[DAYS][2]; // [][0] = high, [][1] = low
    int totalHigh = 0, totalLow = 0;

    for (int i = 0; i < DAYS; ++i)
    {
        // Input high temperature with validation
        do
        {
            cout << "Enter high temperature for day " << i + 1 << ": ";
            cin >> temperatures[i][0];
            if (cin.fail() || temperatures[i][0] < -100 || temperatures[i][0] > 150)
            {
                cout << "Invalid input. Please enter a valid temperature (-100 to 150).\n";
                cin.clear(); // Clear error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            }
        } while (cin.fail() || temperatures[i][0] < -100 || temperatures[i][0] > 150);

        // Input low temperature with validation
        do
        {
            cout << "Enter low temperature for day " << i + 1 << ": ";
            cin >> temperatures[i][1];
            if (cin.fail() || temperatures[i][1] < -100 || temperatures[i][1] > 150)
            {
                cout << "Invalid input. Please enter a valid temperature (-100 to 150).\n";
                cin.clear(); // Clear error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            }
        } while (cin.fail() || temperatures[i][1] < -100 || temperatures[i][1] > 150);

        totalHigh += temperatures[i][0];
        totalLow += temperatures[i][1];
    }

    double avgHigh = static_cast<double>(totalHigh) / DAYS;
    double avgLow = static_cast<double>(totalLow) / DAYS;

    cout << fixed << setprecision(1);
    cout << "\nAverage high temperature: " << avgHigh << endl;
    cout << "Average low temperature: " << avgLow << endl;

    return 0;
}

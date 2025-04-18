//Lab11-2.cpp - stores finish times in an array and displays the average and lowest times
//Created/revised by Zac Fosdyck on 04/18/2025

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
double getAverage(double times[], int numElements);
double getLowest(double times[], int numElements);

int main()
{
    double finishTimes[5];
    double avgTime = 0.0;
    double lowestTime = 0.0;

    // Input finish times with validation
    for (int x = 0; x < 5; ++x)
    {
        do
        {
            cout << "Enter time for race " << x + 1 << " (positive value): ";
            cin >> finishTimes[x];
            if (finishTimes[x] <= 0 || cin.fail())
            {
                cout << "Invalid input. Please enter a positive number.\n";
                cin.clear(); // Clear error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            }
        } while (finishTimes[x] <= 0 || cin.fail());
    }

    avgTime = getAverage(finishTimes, 5);
    lowestTime = getLowest(finishTimes, 5);

    cout << fixed << setprecision(1) << "\n";
    cout << "Average 5K finish time: " << avgTime << endl;
    cout << "Lowest 5K finish time: " << lowestTime << endl;

    return 0;
}

// Calculate average time
double getAverage(double times[], int numElements)
{
    double total = 0.0;
    for (int x = 0; x < numElements; ++x)
        total += times[x];

    return total / numElements;
}

// Find lowest time
double getLowest(double times[], int numElements)
{
    double lowest = times[0];
    for (int x = 1; x < numElements; ++x)
        if (times[x] < lowest)
            lowest = times[x];

    return lowest;
}

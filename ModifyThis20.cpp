// ModifyThis20.cpp - Finds and displays the highest and lowest numbers
// Created/revised by Zac Fosdyck on 04/18/2025

#include <iostream>
using namespace std;

// Function prototypes
int getHighest(const int[], int);
int getLowest(const int[], int);

int main()
{
    const int SIZE = 8;
    int numbers[SIZE] = {65, 32, 90, 12, 104, 99, 3, 55};

    cout << "Highest number: " << getHighest(numbers, SIZE) << endl;
    cout << "Lowest number: " << getLowest(numbers, SIZE) << endl;

    return 0;
}

int getHighest(const int nums[], int size)
{
    int highest = nums[0];
    for (int i = 1; i < size; ++i)
        if (nums[i] > highest)
            highest = nums[i];
    return highest;
}

int getLowest(const int nums[], int size)
{
    int lowest = nums[0];
    for (int i = 1; i < size; ++i)
        if (nums[i] < lowest)
            lowest = nums[i];
    return lowest;
}

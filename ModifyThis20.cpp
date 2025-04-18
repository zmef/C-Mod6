// ModifyThis20.cpp - Finds and displays the highest and lowest numbers
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

// Function prototypes
int getHighest(const int[], int);
int getLowest(const int[], int);

int main()
{
    const int SIZE = 8;
    int numbers[SIZE] = {65, 32, 90, 12, 104, 99, 3, 55};

    // Get and display highest
    int highest = getHighest(numbers, SIZE);
    cout << "Highest number: " << highest << endl;

    // Get and display lowest
    int lowest = getLowest(numbers, SIZE);
    cout << "Lowest number: " << lowest << endl;

    return 0;
}

// Function to return the highest value
int getHighest(const int nums[], int size)
{
    int highest = nums[0];
    for (int i = 1; i < size; ++i)
    {
        if (nums[i] > highest)
            highest = nums[i];
    }
    return highest;
}

// Function to return the lowest value
int getLowest(const int nums[], int size)
{
    int lowest = nums[0];
    for (int i = 1; i < size; ++i)
    {
        if (nums[i] < lowest)
            lowest = nums[i];
    }
    return lowest;
}

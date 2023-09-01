#include <iostream>
using namespace std;

void swapAlternate(int arr[], int n)
{

    for (int i = 0; i < n; i += 2)
    {

        if (i + 1 < n)
        {
           int temp = arr[i];
           arr[i] = arr[i+1];
           arr[i+1] = temp;
        }
    }
}

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; // Even Array
    int brr[9] = {11, 12, 13, 14, 15, 16, 17, 18, 19}; // Odd Array

    swapAlternate(arr, 10);
    printArray(arr, 10);

    swapAlternate(brr, 9);
    printArray(brr, 9);

    return 0;
}
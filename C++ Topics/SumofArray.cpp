#include <iostream>
using namespace std;

int sumofArr(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}
void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int num[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];
    }
    
    cout << "Sum of array is : " << sumofArr(num, 5) << endl;
    
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value is : ";
    cin >> n;

    int row = 1;
    char value = 'A';
    while (row <= n)
    {
        int col = 1;

        while (col <= row)
        {
            cout << value <<" ";
            value = value + 1;
            col++;
        }
        cout << endl;
        row = row + 1;
    }
}

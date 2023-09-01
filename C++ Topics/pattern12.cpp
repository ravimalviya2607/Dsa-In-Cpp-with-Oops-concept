#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value is: ";
    cin >> n;

    int row = 1;

    while (row <= n) {
        int col = 1;
        char ch = char('A' + row - 1);  // Calculate the character based on row

        while (col <= n) {
            cout << ch << " ";
            ch++;  // Increment the character
            col++;
        }

        cout << endl;
        row++;
    }

    return 0;
}
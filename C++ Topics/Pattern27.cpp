#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter input value : ";
    cin >> n;

    int row = 1;

    while (row <= n)
    {

        // space print
        int space = n - row;
        while (space >= 1)
        {
            cout << "_";
            space--;
        }
        // star print
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
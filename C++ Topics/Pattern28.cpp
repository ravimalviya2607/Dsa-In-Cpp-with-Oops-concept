#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter input value : ";
    cin >> n;

    int row = n;

    while (row >= 1)
    {
        //space print
        int space = n - row;
        while(space >= 1){
            cout << "_"; 
            space --;
        }

        int col = row;
        //print star
        while (col >= 1)
        {
            cout << "*";
            col --;
        }
        cout << endl;
        row--;
    }
        return 0;
}

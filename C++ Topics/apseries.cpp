#include <iostream>
using namespace std;

int apSeries(int x, int y, int z)
{

    int ap = (y + (x -1 ) *z);
    return ap;
}

int main()
{
    int n, a, d;
    cout << "Enter the value of n ";
    cin >> n;
    cout << "Enter the value of a ";
    cin >> a;
    cout << "Enter the value of d ";
    cin >> d;

    int result = apSeries(n, a, d);

    cout << "an = " << result << endl;
    return 0;
}
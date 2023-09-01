// Question 1 :
// Sum of 1 to N natural number
#include <iostream>
using namespace std;

int main()
{

    /*    int n;
        cin >> n;

        int i = 1;
        int sum = 0;

        while( i<=n ){
            sum = sum + i;
            i = i + 1;
        }
        cout << "Value of Sum is : " << sum << endl;



    // Question 2 :
    // Sum of 1 to N Even number
        int n;
        cout << " Enter the Number : ";
        cin >> n;

        int i = 2;
        int sum = 0;

        while( i<=n ){
            sum = sum + i;
            i = i + 2;
        }
        cout << "Value of Sum is : " << sum << endl;


    // Fahrenheit to Celsius

    float Celsisus,Fahrenheit;

    cout << "Enter the Celsisus Value ";

    cin >> Fahrenheit;

    Celsisus = (Fahrenheit - 32 ) * (5.0/9.0);

    cout << "Celsisus " << Celsisus << endl;


    */
    int n;

    cin >> n;

    int i = 2;

    while (i < n)
    {
        if (n % i == 0)
        {
            cout << " Not Prime " << i << endl;
        }
        else
        {
            cout << " A Prime " << i<< endl;
        }

        i = i + 1;
    }

}
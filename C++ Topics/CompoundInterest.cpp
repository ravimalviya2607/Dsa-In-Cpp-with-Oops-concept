#include<iostream>
#include<math.h>

using namespace std;

int main(){

    float principal, time, rate, CI;

    cout << "Enter Principal Amount : ";
    cin >> principal ;


    cout << endl << "Enter rate : ";
    cin >> rate ;

    cout << endl << "Entet time (year) : ";
    cin >> time ;


    // Calculate compound interest

    CI = principal * pow((1 + rate /100), time);
    CI = CI - principal;

    cout << "Compound Interest (CI)  : " << CI;

    return 0;

}
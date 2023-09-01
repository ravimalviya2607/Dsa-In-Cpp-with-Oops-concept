#include<iostream>
using namespace std;

int main(){

    int num = 5;

    cout << num << endl;


    // address of Operator

    cout << "Address of num is : " << &num << endl;

    int *ptr = &num;

    cout << "Address is : " << ptr << endl;
    cout << " Value is : " <<  *ptr << endl;

    double d  = 4.3;
    double *p2 = &d;

    cout << " value of pointer: " << *p2 << endl;
    cout << " value of address : " <<  p2 << endl;

    cout << " Size of pointer: " << sizeof(num) << endl;
    cout << " Size of pointer: " << sizeof(ptr) << endl;

    return 0;
}
#include<iostream>
using namespace std;

int main(){

    //pointer to int is created, and pointing to some garbadge address
    //int *p = 0;
     
    //cout << *p << endl;

/*    int i = 10;
    //int *p = &i;

    int *p  = 0;
    p = &i;

    cout << i << endl;
    cout << &i << endl;
    cout << *p << endl;
    cout << p << endl; 

*/


    int num = 5;
    int a = num;
     a++;

    cout << num << endl;

    int *p = &num;
    cout << "before " << num << endl;
    (*p)++;

    cout << "after " << num << endl;


    // copy pointer
    int *q = p;

    cout << p << "_" << q << endl;
    cout << *p << "_" << *q << endl;

    //important concept
    
    int r = 3;
    int *t = &r;

    //cout << (*t)++ << endl;
    *t = *t + 1;
    cout << *t << endl;
    cout << "before " << t << endl; 
    t = t + 1;
    cout << "after " << t << endl;


    int arr[10];

     cout << sizeof(arr);










    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    /*  int a;

        cout << " Enter the number is : ";
        cin >> a;  // for a user input


    //    cout << "value of a is : " << a << endl;

    // if a is positive

    if(a > 0)
    {
        cout << " A is positive " << endl;
    }
    else
    {
        cout << " A is Nagative " << endl;
    }
      */

    // int a,b;

    // cin >> a >> b;

    // a = cin.get();

    // cout << "value of a and b is " << a << " " << b << endl;

    // cout <<" value of a is : " << a << endl;

    /*
     int a,b;


     cout <<" Enter the value of a " << endl;
     cin >> a ;
     cout <<" Enter the value of b " <<endl;
     cin >> b ;

     if( a > b)
     {
        cout <<" A is greater " << endl;
     }
     if (b > a)
     {
        cout << " B is greater" << endl;
     }

    */

    // int a;
    // cout <<" Enter the value of a is " << endl;
    // cin>>a;

    /* if (a > 0)
     {
     cout << "a is positive " <<endl;
    }
    else
    {
        if (a < 0){
            cout << "a is nagative";
        }
        else {
            cout << "a is 0 ";
        }

    }


    if (a > 0)
    {
        cout << " a is positive " ;
    }
    else if (a < 0){
        cout << " a is nagative " ;
    }
    else
    {
        cout << " a is zero " ;
    }


    */
    // Question 1

 /*  int a = 9;

    if (a == 9)
    {
        cout << " Nine " << endl;
    }
    if (a > 0)
    {
        cout << "positive ";
    }
    else
    {
        cout << "Negative ";
    }

    int a = 2;
    int b = a + 1;

    if ((a = 3) == b)
    {
        cout << a;
    }
    else
    {
        cout << a + 1;
    }

    int a = 24 ;

    if ( a > 20 ){
        cout << "Love" << endl;
    }
    else if ( a == 24 ){
        cout << "Lovely" << endl;
    }
    else {
        cout << "Babbar" << endl;
    }
    cout << a << endl;
    */

   char n;
   cout << "Enter value is : " << endl;
   cin >> n;

   if(n>='A' &&n<='Z') {
    cout << "Given value is upper case" << endl;
   }
   else if (n>='a'&& n <='z')
   {
    cout << "Given value is Lower case" << endl;
   }
   else if (isdigit(n)){
    cout << "Given value is Digit" << endl;
   }

}
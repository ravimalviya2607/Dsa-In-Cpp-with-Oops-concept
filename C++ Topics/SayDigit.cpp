#include<iostream>
using namespace std;

void sayDigit(int n, string arr[]){

    //base case
    if(n==0)
      return;

    //processing 
    int digit = n % 10;
    n = n / 10;
    
    //recursive call
    sayDigit(n, arr);

    cout << arr[digit] << " ";

}

int main(){

    string arr[10] = {"zero","one", "two",
                       "three", "four", "five", "six", 
                       "seven", "Eight", "nine"};

    int n;
    cin >> n;

    sayDigit(n, arr);
}
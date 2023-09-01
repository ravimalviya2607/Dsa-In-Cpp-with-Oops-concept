#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value is : ";
    cin>>n;

    int i = 1;
    int count = 1;

    while(i<=n){

        int j = 1;
        while(j<=n){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i = i + 1;
    }
}
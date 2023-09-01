#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value is : ";
    cin>>n;

    int row = 1;
    int count = 1;
    while(row<=n){

        int col = 1;
        
        while(col<=row){
            cout<<count;
            count++;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}

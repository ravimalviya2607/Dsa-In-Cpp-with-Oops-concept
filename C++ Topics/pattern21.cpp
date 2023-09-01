#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value is : ";
    cin>>n;

    int row = 1;
    
    while(row<=n){
    
    //space print 
    int space = n - row + 1;
    while(space){
        cout<<"_";
        space = space - 1;
    }

    // start print
    int col;
    int star = n - row + 1;
    while(col<=n)
    {
        cout<<star;
        
       
    }
    cout<<endl;
    row = row + 1;

    }
}
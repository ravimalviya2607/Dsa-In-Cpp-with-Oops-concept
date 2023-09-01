#include <iostream>
#include<array>

using namespace std;
int main() {

    int basic[3] = {1,2,3};

    array<int,4> a = {1,2,3,4}; // static array it will be created by the basic array
                                // so that we don't use in coding STL array only basic array will be used.

    int size = a.size();       

    for(int i = 0; i < size; i++){
        cout << a[i] << endl;
    }                     

    cout << "Element at 2nd Index-> " << a.at(2) << endl;

    cout << " Empty or not-> " << a.empty() << endl;

    cout << "First Element-> " << a.front() << endl; 
    
    cout << "Last Element-> " << a.back() << endl;

}
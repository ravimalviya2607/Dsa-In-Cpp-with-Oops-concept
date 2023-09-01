#include<iostream>
using namespace std;

void printArray(int arr[], int size) {

    cout << " printing the array " << endl;
    // print the array
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){

//    int dost [10] = {0};
//    printArray(dost ,10);
//    cout << endl;

//    int arr[10] = {-24};
//    for(int i = 0; i<10; i++) {
//     arr[i] = {-24};
//     cout << arr[i] << " ";
//    }


    //declare
     int number[15];
    
    //accessing an array
    cout << "Value at = " << number[20] << endl;
    
     int one[10] = {2,7};
      int n = 10;
      printArray(one, 10);

      int onesize = sizeof(one);
      cout << onesize;

      int second[15] = {0};
      int m = 15;
      printArray(second, 15);

      int third[10] = {1};
      int k = 10;
      printArray(third, 10);

      cout << endl;


    char ch[5] = {'a', 'b', 'c', 'd'};  

    for( int i = 0; i < 5; i++){

        cout << ch[i] << " ";
    }


      return 0;
}
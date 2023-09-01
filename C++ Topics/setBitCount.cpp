#include<iostream>
using namespace std;

int countSetBit(int n) {

    int count = 0;
    while(n > 0){
        count += n&1;
        n >>= 1;
    }
    return count;
}

int main() {

   int a = 5;
   int b = 3;

    int totalSetBit = countSetBit(a) + countSetBit(b); 

    cout << "Total number of Set Bit = " << totalSetBit << endl;;


    return 0;
}

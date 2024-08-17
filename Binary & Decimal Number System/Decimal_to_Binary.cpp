#include <iostream>
#include <math.h>
using namespace std;
int main(){

    int n;
    cout << "Enter the number :" << endl;
    cin >> n;

    if(n < 0){
          n = ~n + 1;
    }      
         
    int ans=0;
    int i=0;
    while (n!=0){
        int bit = n & 1;      //(for all binary number get)
      
        ans = (bit * round(pow(10, i))) + ans;      // (to make a decimal number from binary number)
      
        n =n >> 1;
        i = i+1;
    }

    cout << "Binary is " << ans; 
}

/*
Output - 

    Enter the number :
    15
    Binary is 1111
*/
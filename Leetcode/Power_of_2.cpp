#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;
bool Checkpower(int n){
    int ans=1;
   for(int i=0;i<=30;i++){

        if(ans == n){
            return true;
        }

        if(ans < INT_MAX/2){
             ans=  ans * 2;
        }
       
        

    }

    return false;
}
int main(){
    int n;
    cout << "Enter the power" << endl;
    cin >> n;

    bool ans = Checkpower(n);

   

    cout << ans << endl;
}

// Explanation :- if number is form of 2^n then return true else false

/*
    Enter the number 
    16
    Output -  True

    Enter the number 
    10
    Output -  False

*/
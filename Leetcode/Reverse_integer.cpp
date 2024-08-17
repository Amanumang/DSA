#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;
int Reverse(int n){
    int ans =0;
    while(n!=0){
        int digit = n % 10; 
        if(ans > INT_MAX/10 || ans  < INT_MIN/10){    // Int ke min max se chota ya bada hone pe 0 return kre
             return 0;
          }
        ans = (ans * 10) + digit;
        n = n/10;
    }
    
   

    return ans;
}
int main(){

    int n ;
    cout << "Enter a number " << endl;
    cin >> n;

  int ans =  Reverse(n);
    cout << "Reverse is : " << ans << endl;
}

/*
Output - 

    Enter the number :
    123
    Reverse is : 321

    Enter the number :
    1237896542589
    Reverse is : 0
*/
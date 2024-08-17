#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int Compliment(int n){

    int m =n;
    int mask = 0;
    
    //Edge case because 0 complement is always 1
    if(n == 0){
        return 1;
    }

    while (m!=0){

        mask = (mask << 1) | 1;         
        m = m >> 1;
    }

    int ans = ~n & mask;
    return ans;

}
int main(){

    int n;
    cout << "Enter a number " << endl;
    cin >> n;

    int ans = Compliment(n);
      
    cout << "Compliment of 10 base Integer is :" << ans << endl;
}



//  Explanantion :-  Enter number is 10 & its binary 1010 then compliment is 0101 and decimal is 5, So ans is 5.

/* Output-
    Enter a number 
    10
    Compliment of 10 base Integer is :5

*/
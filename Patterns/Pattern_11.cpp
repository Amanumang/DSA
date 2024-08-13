#include <iostream>
using namespace std;
int main(){

    int n;
    cin >>n ;
    for(int i=1; i<=n; i++){ 
       
        // print 1st trangle
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        // print 2nd trangle
        for(int k=i; k>=1; k--){
            cout << k;
        }
        //print 3rd trangle
        for(int m=2; m <i+1; m++){
            cout << m;           
        }
       
    
       
         cout<<endl;
    }
}



/* Output -
   Enter - 5   

         1
        212
       32123
      4321234
     543212345


 */

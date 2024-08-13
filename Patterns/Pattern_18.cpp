#include <iostream>
using namespace std;
int main(){

    int n;
    cin >>n ;
   
    for(int i=1; i<=n; i++){
      
        // Print 1st triangle
        for(int j=1 ; j <= n-i ; j++){
            cout << " " ;           
        }
        // Print 2nd triangle
        for(int j=1 ; j <= i ; j++){
            cout << i  ;           
        }

        cout << endl;
    }
}



/* Output -
   Enter - 5 

                1
               22
              333
             4444
            55555


 */

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
            cout << "*"  ;           
        }
          // Print 3rd triangle
        for(int j=2 ; j <= i ; j++){
            cout << "*"  ;           
        }

        cout << endl;
    }
    for(int i=1; i<=n; i++){
      
        // Print 1st triangle
        for(int j=2 ; j <= i ; j++){
            cout << " "  ;           
        }
         // Print 2nd triangle
        for(int j=1 ; j <= n-i+1 ; j++){
            cout << "*" ;           
        }
       
        for(int j=1 ; j <=n-i ; j++){
            cout << "*"  ;           
        }
          // Print 3rd triangle
        

        cout << endl;
    }
}



/* Output -
   Enter - 5 

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *

 */

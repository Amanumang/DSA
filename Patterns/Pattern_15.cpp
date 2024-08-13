#include <iostream>
using namespace std;
int main(){

    int n;
    cin >>n ;
   
    for(int i=1; i<=n; i++){
       
        for(int j=n ; j >= 1 ; j--){
            cout << j<< " " ;
            
        }
        cout << endl;
    }
}



/* Output -
   Enter - 6  

            654321
            654321
            654321
            654321
            654321
            654321


 */

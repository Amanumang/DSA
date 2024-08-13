#include <iostream>
using namespace std;
int main(){

    int n;
    cin >>n ;
   
    for(int i=1; i<=n; i++){
       int start = i;

        for(int j=1 ; j <= i ; j++){
            cout << start << " " ;
            start --;
        }
        cout << endl;
    }
}



/* Output -
   Enter - 4  

        1
        21
        321
        4321


 */

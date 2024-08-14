#include <iostream>
using namespace std;
int main(){

    uint32_t n ;
    cout << "enter the number " << endl;
    cin >> n;

    int ans =0;
    while (n!=0){

        // checking last bit 
        if(n & 1){
            ans++;
        }
        
        n = n >> 1;

    }

    cout << ans << endl;

}
#include <iostream>
using namespace std;
int main(){
    int  n;
    cout << "Enter last number " << endl;
    cin >> n;

    //using for loop
    for(int i=1; i<=n; i++){
        cout << i << " " ;
    }

    //using while loop
    int i=1;
    while( i<=n){
        cout << i << " " ;
        i=i+1;
    }


    /*
    Enter last number 
    10
    Output : 1 2 3 4 5 6 7 8 9 10 */
}
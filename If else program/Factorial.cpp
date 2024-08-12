#include <iostream>
using namespace std;
int main(){

    int n ;
    cout << "Enter a number : " << endl;
    cin >> n;
    int fact=1;
    for(int i=1; i <=n; i++){
        fact = fact * i;
    } 

    cout << "Factorial is : " << fact << endl;
    
}

//Result -
/*
    Enter a number : 
    5
    output - Factorial is : 120

*/
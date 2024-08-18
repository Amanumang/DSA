#include<iostream>
using namespace std;
int main(){

    int n ;
    cout << "Enter a number " << endl;
    cin >> n;

    switch (n)
    {
        case 1: cout << "Eneterd number is one " << endl;
        break;

         case 2: cout << "Eneterd number is two " << endl;
        break;

         case 3: cout << "Eneterd number is three " << endl;
        break;
     
        default:  cout << "Default number " << endl;
        break;
    }
    return 0;

}

/*

    Enter a number 
    3
    output : Eneterd number is three


    Enter a number 
    6
    output : Default number 

*/
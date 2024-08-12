#include <iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    int orignal_number = n;
    int last_digit=0;
    int reverse =0;
    while(n >0){
        last_digit = n % 10;
        reverse = (reverse*10) + last_digit;
        n = n/10;
    }
    if (reverse == orignal_number)
    {
        cout << " entered number is Palindrom " << endl;
    }
    else {
        cout << " entered number is Not Palindrom " << endl;
    }

}

//Results -
/*
    Enter a number : 
    131
    output : entered number is Palindrom 

*/
/*
    Enter a number : 
    1234
    output : entered number is Not Palindrom  

*/
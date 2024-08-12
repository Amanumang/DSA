#include <iostream>
#include <math.h>
using namespace std;
int main(){
    
    int n;
    cout << "Enter a number " << endl;
    cin >> n;
    int orignal_number=n;
    int sum=0;
    int last_digit=0;
    while(n!=0){

        last_digit = n % 10;  
        // pow() returns a double value
        // round() returns the equivalent int
        sum = sum + round(pow(last_digit,3));
        //or
        //sum += last_digit * last_digit * last_digit;  
        n=n/10;

    }
    if(orignal_number ==sum){
        cout << "Entered number is Armstrong" << endl;
    }
    else{
         cout << "Entered number is Not Armstrong" << endl;
    }

    return 0;
}

//Result -

/*
    Enter a number 
    371
    output : Entered number is Armstrong
*/

/*
    Enter a number 
    148
    output :Entered number is Not Armstrong
*/
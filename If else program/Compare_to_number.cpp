#include <iostream>
using namespace std;
int main(){

    int a;
    cout << "Enter first number : " << endl;
    cin >> a;

    int b;
    cout << "Enter second number :" << endl;
    cin >> b;

    if (a > b){
        cout << "First number is greater then second number." << endl;
    }
    else if (a < b){
         cout << "Second number is greater then first number." << endl;
    }
    else {
         cout << "Both number are equals." << endl;
    }

}

// Result - 
/*Enter first number : 
    5
    Enter second number :
    9
    output : Second number is greater then first number. */

/*Enter first number : 
    8
    Enter second number :
    5
    output : First number is greater then second number. */

/*Enter first number : 
    6
    Enter second number :
    6
    output : Both number are equals. */
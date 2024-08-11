#include <iostream>
using namespace std;
int main(){

int a;
cout << "Enter a number : " << endl;
cin >> a;

    if(a > 0){
        cout << "Number is Positive" << endl;
    }
    else if(a < 0){
        cout << "Number is Negative" << endl; 
    }
    else{
        cout << "Entered Number is 0 " << endl;
    }
}

// Result -  
// Enter a number : 5
// output : Number is Positive
// Enter a number : -6
// output : Number is Negative
// Enter a number : 0
// output : Entered Number is 0

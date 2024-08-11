#include <iostream>
using namespace std;
int main(){
    float F ;
    cout << "Enter Fahrenheit " << endl;
    cin >> F;

    float C;
    C=(5.0/9)*(F-32);

     cout <<  F << " Fahrenheit " << " equals to " << C << " Celsius" << endl;

}

//Result- 
/*
    Enter Fahrenheit 
    100
    Output : 100 Fahrenheit  equals to 37.7778 Celsius
*/
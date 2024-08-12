#include <iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter a number : " << endl;
    cin >> n;

    int first_Number=0;
    int second_Number =1;
    int fibo=0;
    for(int i=0; i<=n ; i++){
            fibo = first_Number + second_Number;
            first_Number = second_Number;
            second_Number = fibo;
            cout << fibo <<"\t";
    }
   

}

//Result -
/*
    Enter a number : 
    5
    output : 1       2       3       5       8       13

*/
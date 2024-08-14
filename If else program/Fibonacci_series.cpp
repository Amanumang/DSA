#include <iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter a number : " << endl;
    cin >> n;

    int first_Number=0;
    int second_Number =1;
   
    for(int i=1; i<=n ; i++){
           int next_number = first_Number + second_Number;
             cout << next_number <<" ";
            first_Number = second_Number;
            second_Number = next_number;
           
    }
   

}

//Result -
/*
    Enter a number : 
    5
    output : 1       2       3       5       8       13

*/

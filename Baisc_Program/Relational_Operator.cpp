#include <iostream>
using namespace std;
int main(){

    int a =2;
    int b =5;

    bool first = (a == b);
    cout << first << endl;
    //output - 0 (false)

     bool second = (a > b);
    cout << second << endl;
    //output - 0 (false)

     bool third = (a < b);
    cout << third << endl;
    //output - 1 (true)

     bool fourth = (a <= b);
    cout << fourth << endl;
    //output - 1 (true)

     bool fifth = (a >= b);
    cout << fifth << endl;
    //output - 0 (false)

     bool sixth = (a != b);
    cout << sixth << endl;
    //output - 1 (true)
}
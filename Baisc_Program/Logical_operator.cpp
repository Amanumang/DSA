#include <iostream>
using namespace std;
int main(){

    int a =3;
    int b =4;
    int c= 4;
    char ch = 'A';
    char ch1 = 'B';
    char ch2 = 'A';

    bool first = (a == b && ch == ch1 );
    cout << first << endl;
    // output 0 (false)

     bool third = (a != b && ch == ch1 );
    cout << third << endl;
    // output 0 (false)

     bool fourth = (a != b && ch != ch1 );
    cout << fourth << endl;
    // output 1 (true)

     bool fifth = (b == c && ch == ch2 );
    cout << fifth << endl;
    // output 1 (true)


     bool second = (a == b || ch == ch1 );
    cout << second << endl;
    // output 0 (false)

    bool sixth = (a == b || ch != ch1 );
    cout << sixth << endl;
    // output 1 (true)

    bool seventh = (a != b || ch == ch1 );
    cout << seventh << endl;
    // output 1 (true)

    bool eighth = (b == c || ch == ch2 );
    cout << eighth << endl;
    // output 1 (true)

    
    cout << !a << endl;
    // output 0 (true)

    int e = 0;
      cout << !e << endl;
      // output 0 (true)
}
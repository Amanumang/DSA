#include <iostream>
using namespace std;
int main(){

    int a = 1234;
    cout << a << endl;
    // output - 1234

    char ch ='A';
    cout << ch << endl;
    // output - A

    bool b = true;
    cout << b << endl;
    // output - 1

    float f = 13.5;
    cout << f << endl;
    // output - 13.5

    double d = 12.11;
    cout << d << endl;
    // output - 12.11

    int sz = sizeof(d);
    cout << sz << endl;
    // output - 8 (double ka size)

    unsigned int un = 123;
    cout << un << endl; 
    // output - 123

    unsigned int nun = -123;
    cout << nun << endl; 
    // output - 4294967173 ( unsinged int store only positve number thats why it return positve number for -123 whose calculate via 1's and 2's method)

}
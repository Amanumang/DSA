#include <iostream>
using namespace std;
int main(){

     int num1 = 10; // Binary representation: 1010
    int num2 = 5;  // Binary representation: 0101

    // Bitwise AND (&)
    int result_and = num1 & num2; // Result: 0000 (decimal 0)
    cout << "Bitwise AND: " << result_and << endl;

    // Bitwise OR (|)
    int result_or = num1 | num2; // Result: 1111 (decimal 15)
    cout << "Bitwise OR: " << result_or << endl;

    // Bitwise XOR (^)
    int result_xor = num1 ^ num2; // Result: 1111 (decimal 15)
    cout << "Bitwise XOR: " << result_xor << endl;

    // Bitwise NOT (~) - Unary operator
    int result_not1 = ~num1; // Result: 1111 0101 (decimal -11 in 2's complement)
    cout << "Bitwise NOT (num1): " << result_not1 << endl;
    
    int result_not2 = ~num2; // Result: 1111 1010 (decimal -6 in 2's complement)
    cout << "Bitwise NOT (num2): " << result_not2 << endl;

    // Bitwise Left Shift (<<)
    int result_left_shift = num1 << 1; // Result: 10100 (decimal 20)
    cout << "Bitwise Left Shift: " << result_left_shift << endl;

    // Bitwise Right Shift (>>)
    int result_right_shift = num1 >> 1; // Result: 0101 (decimal 5)
    cout << "Bitwise Right Shift: " << result_right_shift << endl;

    //Increment/Decrement
    int a=4,b=6, c=8,d=10;
   
    cout << a++ << endl;  // Post Increment Result: 4 
    cout << ++b << endl;  // Pre Increment Result: 7
    cout << c-- << endl;  // Post Decrement Result: 8
    cout << --d << endl;  // Pre Decrement Result: 9

    return 0;
}
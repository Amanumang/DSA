#include <iostream>
using namespace std;
int main(){

    int a;
    cout << "Enter first number : " << endl;
    cin >>a;
    char ch;
    cout << "Select operator what you want to do " << endl;
    cin >> ch;
    int b ;
    cout << "Enter second number :" << endl;
    cin >> b;

    switch (ch)
    {
        case '+': cout << "Sum is : " << a + b << endl;
        return 0;

        case '-': cout << "substract is : " << a - b << endl;
        return 0;

        case '*': cout << "Multiply is : " << a * b << endl;
        return 0;

        case '/': cout << "Devide is : " << a / b << endl;
        return 0;
    
        default: cout << "Wrong operator " << endl;
         return 0;
    }

}

//Result -
/*
    Enter first number : 
    5
    Select operator what you want to do 
    +
    Enter second number :
    8
    output :- Sum is : 13
*/
/*
    Enter first number : 
    8
    Select operator what you want to do 
    -
    Enter second number :
    5
    output :- substract is : 3
*/
/*
    Enter first number : 
    5
    Select operator what you want to do 
    *
    Enter second number :
    8
    output :- Multiply is : 40
*/
/*
    Enter first number : 
    8
    Select operator what you want to do 
    /
    Enter second number :
    5
    output :- Devide is : 1
*/
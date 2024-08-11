#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter a character : " << endl;
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z'){
        cout << "Uppercase " << endl;
    }
    else if (ch >= 'a' && ch <='z')
    {
        cout << "Lowercase" << endl;
    }

    return 0;
}

//Result -
/*
    Enter a character : 
    S
    Uppercase
*/

/*
    Enter a character : 
    s
    Lowercase
*/
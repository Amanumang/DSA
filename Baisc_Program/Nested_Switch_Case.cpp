#include<iostream>
using namespace std;
int main(){

    int n ,m =1;
    cout << "Enter a number " << endl;
    cin >> n;

    char ch ='1';

    switch (ch)
    {
        case 1: cout << "Number One" << endl;
        break;
    
        case '1': switch (m)
        {
            case 1: cout << "Entered number is " << n << endl;
                break;
            
            default: cout << "Entered number is different" << endl;
                break;
        }
        break;
    }

    return 0;

}

/*

    Enter a number 
    15
    Output : Entered number is 15

*/
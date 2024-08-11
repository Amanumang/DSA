#include <iostream>
using namespace std;
int main(){
    int n, sum=0;
    cout << "Enter a number " << endl;
    cin >> n;

    //using for loop
    for(int i=0; i<=n ;i++)
    {
        sum = sum + i;
    }

     //using while loop
    int i=0;
    while(i <= n)
    {
        sum = sum + i;
        i++;
    }

    cout << " Sum of all numbers is : " << sum << endl;
}

//Result -
  /*  Enter a number 
    5
    output : Sum of all numbers is : 15 */
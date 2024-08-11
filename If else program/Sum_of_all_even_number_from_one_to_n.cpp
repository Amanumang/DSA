#include <iostream>
using namespace std;
int main(){
    int n, sum=0;
    cout << "Enter a number " << endl;
    cin >> n;
    int i=2;
    
    //using for loop
    for(i; i<=n ;i++)
    {
        if(i % 2 == 0){
            sum = sum + i;
        }
        
    }

     //using while loop  
    while(i <= n)
    {
        if(i % 2 == 0){
            sum = sum + i;
        }
        i++;
    }

    cout << " Sum of all even numbers is : " << sum << endl;
}

//Result -
  /*  Enter a number 
        6
        Sum of all even numbers is : 12 */
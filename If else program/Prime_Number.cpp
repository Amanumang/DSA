#include <iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter a numer : " << endl;
    cin >> n;

    //using for loop
    for(int i=0;i<=n ; i++){
        if(n % 2 == 0){
             cout << "Numer is Not Prime" << endl;
             return 0;
         }
    }
    cout << "Numer is Prime" << endl;
     return 0;
    

}

// Results-

/*
    Enter a numer : 
    7
   Output : Numer is Prime
*/ 

/*
    Enter a numer : 
    8
   Output : Numer is Not Prime
*/ 
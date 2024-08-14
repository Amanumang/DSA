#include <iostream>
using namespace std;
int main(){

   
    int a =1;
    int b =2;

    if(a-- > 0 && ++b >2){
        cout << " Inside If" << endl;
    }
    else {
        cout << " Inside Else" << endl;
    }
    //output - Inside If

    int c=1;
    int d=2;
      if(c-- > 0 || ++d <2){
        cout << " Inside If" << endl;
    }
    else {
        cout << " Inside Else" << endl;
    }
     //output - Inside If

     int num1=3;
     cout << 25 * (num1++) << endl;  //output - 75

     int num2=3;
     cout << 25 * (++num2) << endl;  //output - 100
}
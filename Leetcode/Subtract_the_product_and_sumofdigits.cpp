#include <iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int sum=0;
    int product=1;
    for(int i=0; i<n; i++){
        product = product * (n%10);
        sum = sum + (n%10);
        n=n/10;

    }
    cout << "Product is - " << product << endl;
    cout << "Sum is - " << sum << endl;
    cout << "Subtraction is - " << product - sum << endl;

}
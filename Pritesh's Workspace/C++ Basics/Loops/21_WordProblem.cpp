/*Two numbers are entered through the keyboard, wap to find the value of one number raised to the power of another*/
#include <iostream>
using namespace std;
int main(){

    int a;
    cout << "Enter First Number : ";
    cin >> a ;


    int b;
    cout << "Enter Second Number : ";
    cin >> b ;

    int power = 1;

    for(int i=0; i<b; i++){
        power = power * a;
    }

    cout << a << "^" << b << " = " << power << endl;


    return 0;
}
#include <iostream>
using namespace std;
int main(){

    int a;
    cout << "Enter First Number : " ;
    cin >> a;

    int b;
    cout << "Enter Second Number : " ;
    cin >> b;

    int c;
    cout << "Enter Third Number : " ;
    cin >> c;

    if(a>b and a>c){
        cout << a << " is Greatest" << endl;
    }
    if(b>c){
        cout << b << " is Greatest" << endl;
    }
    else{
        cout << c << " is Greatest" << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){

    int num;
    cout << "Enter Any Number : ";
    cin >> num ;
    int rev = 0;
    while(num>0){
        rev = rev * 10;
        rev = rev + (num % 10);
        num = num / 10;
    }
    cout << rev << endl;
    return 0;
}
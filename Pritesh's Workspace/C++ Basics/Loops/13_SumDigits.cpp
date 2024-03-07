#include <iostream>
using namespace std;
int main() {

    int num;
    cout << "Enter Any Number : " ;
    cin >> num ;
    int sum = 0;
    while(num!=0){
        sum = sum + (num%10);
        num = num / 10;
    }
    cout << sum ;
    return 0;
}
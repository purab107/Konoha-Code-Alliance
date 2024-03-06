// 7 -> ABSOLUTE VALUE -> 7
// -7 -> ABSOLUTE VALUE -> 7
#include <iostream>
using namespace std;
int main() {

    int num;
    cout << "Enter Any Number : " ;
    cin >> num ;
    if(num<0){

        num = num * (-1);
    }
    cout << "Absolute Value : " << num << endl ;
    return 0;
}
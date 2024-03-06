/* Take positive integer input and tell if it is a three digit 
number or not*/

#include <iostream>
using namespace std;
int main() {

    int num;
    cout << "Enter Any Number : " << endl;
    cin >> num;

    if(num > 99 and num < 1000){
        cout << "IT IS A THREE DIGIT NUMBER " << endl;
    }
    else{
        cout << "IT IS NOT A THREE DIGIT NUMBER " << endl;
    }

    return 0;
}
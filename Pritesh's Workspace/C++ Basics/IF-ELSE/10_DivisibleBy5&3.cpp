#include <iostream>
using namespace std;
int main() {

    int num;
    cout << "Enter Any Number : " << endl;
    cin >> num;

    if(num%15==0){

        cout << "Number Is Divisible By 5 and 3" << endl;
    }
    else{

        cout << "Number Is Not Divisible By 5 and 3" << endl;
    }

    return 0;
}
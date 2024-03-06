#include <iostream>
using namespace std;
int main(){

    int num;
    cout << "Enter Any Number : " ;
    cin >> num ;
    if(num % 5 == 0){
        cout << "Divided By 5" << endl;
    }
    else{
        cout << "Not Divided By 5" << endl;
    }
    return 0;
}
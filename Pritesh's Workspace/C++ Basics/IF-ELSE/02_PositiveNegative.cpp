#include <iostream>
using namespace std;
int main(){

    int a;
    cout << "Enter First Number : " ;
    cin >> a;

    if(a<0){
        cout << a << " is Negative" << endl;
    }
    else{
        cout << a<< " is Positive" << endl;
    }
    return 0;
}
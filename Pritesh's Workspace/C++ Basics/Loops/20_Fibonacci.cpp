#include <iostream>
using namespace std;
int main(){

    int num;
    cout << "Enter Any Number : ";
    cin >> num;
    
    int a=0, b=1, sum = 0;
    for(int i=0; i<num; i++){
        cout << a << "\t" ;
        sum = a + b;
        a = b;
        b = sum ;
    }
    
    return 0;
}
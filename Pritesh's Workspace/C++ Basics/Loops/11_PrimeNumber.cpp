#include <iostream>
using namespace std;
int main() {

    int n;
    cout << "Enter Any Number : " ;
    cin >> n ;

    int temp = 0;

    for(int i = 2; i<n; i++){
        if(n%i==0){
            temp++;
            break;     
        }
    }

    if(temp==0){
        cout << "It Is A Prime Number\n";
    }
    else{
        cout << "It Is A Composite Number (not a prime number) \n";
    }

    return 0;
}
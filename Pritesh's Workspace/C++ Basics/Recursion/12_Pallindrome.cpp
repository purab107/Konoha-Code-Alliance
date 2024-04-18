#include<iostream>
using namespace std;

void pallindrome(int n){

    int rev=0;
    if(n==0) return;

    while(n>0){

        rev = rev * 10;
        rev = rev + (n % 10);
        n = n / 10;
    }
}

int main() {

    int n;
    cout << "Enter Any Number : ";
    cin>>n;
    int temp = n;

    cout << rev << endl;
}
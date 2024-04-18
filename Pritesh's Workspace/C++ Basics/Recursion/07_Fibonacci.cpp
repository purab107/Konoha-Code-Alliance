#include<iostream>
using namespace std;
int fibo(int n){

    if(n<=2) return 1;
    return fibo(n-1)+fibo(n-2);
}


int main(){

    int n;
    cout << "Enter Any Number : ";
    cin>>n;

    cout << "Fibonacci : " << fibo(n) << endl;

    return 0;
}
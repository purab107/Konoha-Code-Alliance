#include<iostream>
using namespace std;
void DecInc(int n){

    if(n==0) return;
    cout << n << endl;
    DecInc(n-1);
    cout << n << endl;
}

int main(){
    int n;
    cout << "Enter Any Number : ";
    cin>>n;
    DecInc(n);
}
#include<iostream>
using namespace std;

void printNTO1(int n){

    if(n==0) return;
    cout << n << endl;
    printNTO1(n-1);
}
int main() {

    int n;
    cout << "Enter Any Number : " ;
    cin >> n ;

    printNTO1(n);
} 
#include <iostream>
using namespace std;

void printNum(int n){
    if(n==0) return;
    printNum(n-1);
    cout << n << endl;
} 

int main() {

    int n;
    cout << "Enter Any Number : " ;
    cin >> n;

    printNum(n);

    return 0;
}
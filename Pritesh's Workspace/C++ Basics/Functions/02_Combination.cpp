#include <iostream>
using namespace std;

int factorial(int n){

    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }

    return fact;
}

int main(){

    int n;
    cout << "Enter The Object N : " ;
    cin >> n ;

    int r;
    cout << "Enter The Object R : ";
    cin >> r;

    int nCr = factorial(n) / ( factorial(r) * factorial(n-r));

    cout << "Answer From Combination Formula : " << nCr << endl;

    return 0;
}
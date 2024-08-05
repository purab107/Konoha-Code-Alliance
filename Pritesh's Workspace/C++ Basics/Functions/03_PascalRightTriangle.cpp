#include <iostream>
using namespace std;

int factorial(int n){

    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }

    return fact;
}

int combination(int n, int r){

    int nCr = factorial(n) / (factorial(r) * factorial(n-r));
    return nCr;
}

int main(){

    int row;
    cout << "Enter The Number Of Rows : " ;
    cin >> row ;

    for(int i=0; i<=row; i++){

        for(int j=0; j<=i; j++){

            cout << combination(i,j) << " " ;
        }
        cout << endl;
    }

    return 0;
}
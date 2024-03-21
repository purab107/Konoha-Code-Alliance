#include<iostream>
using namespace std;
int main() {

    int row;
    cout << "Enter Number Of Rows : " ;
    cin >> row ;

    for(int i=1; i<=row; i++) {

        for(int j=1; j<=row-i; j++){

            cout << "  " ;
        }

        for(int k=1; k<=i; k++){

            cout << k << " " ;
        }

        int a = i - 1;

        for(int m=1; m<=i-1; m++){

            cout << a << " " ;
            a--;
        }

        cout << endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main() {

    int row;
    cout << "Enter Number Of Rows : " ;
    cin >> row;

    int temp = 1;

    for(int i=1; i<=row; i++){

        for(int j=1; j<=row-i; j++){

            cout << "  " ;
        }

        for(int k=1; k<=temp; k++){

            cout << k << " ";
        }
        temp = temp + 2;
        cout << endl;
    }
    return 0;
}
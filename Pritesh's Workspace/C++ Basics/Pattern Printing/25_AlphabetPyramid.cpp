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

        int ch = 65;

        for(int k=1; k<=temp; k++){

            cout << char(ch) << " ";
            ch ++ ;
        }
        temp = temp + 2;
        cout << endl;
    }
    return 0;
}
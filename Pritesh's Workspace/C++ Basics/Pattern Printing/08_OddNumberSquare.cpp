#include <iostream>
using namespace std;
int main() {


    int row;
    cout << "Enter The Number Of Rows : " ;
    cin >> row ;


    for(int i=1; i<=row; i++){

        int a = 1;

        for(int j=1; j<=row; j++){

            cout << a << " ";
            a = a + 2;
        }
        cout << endl ;
    }
    return 0;
}
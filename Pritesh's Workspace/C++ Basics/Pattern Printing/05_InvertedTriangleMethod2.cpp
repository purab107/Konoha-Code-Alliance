#include <iostream>
using namespace std;
int main() {

    int row;
    cout << "Enter Number Of Rows : " ;
    cin >> row;

    int a = row;

    for(int i=1; i<=row; i++){

        for(int j=1; j<=a; j++) {

            cout << "* " ;
        }
        cout << endl;
        a--;
    }



    return 0;
}
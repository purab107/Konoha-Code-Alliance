#include <iostream>
using namespace std;
int main() {

    int row;
    cout << "Enter Number Of Rows : " ;
    cin >> row;

    for(int i=1; i<=row; i++) {

        for(int j=1; j<=row; j++){

            if(i==(row/2)+1 or j==(row/2)+1) cout << "* " ;
            else cout << "  " ;
        }
        cout << endl;
     }
    return 0;
}
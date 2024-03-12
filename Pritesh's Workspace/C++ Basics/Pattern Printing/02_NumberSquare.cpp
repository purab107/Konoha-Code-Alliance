#include <iostream>
using namespace std;
int main() {


    int row;
    cout << "Enter The Number Of Rows : " ;
    cin >> row ;

    int column;
    cout << "Enter The Number Of Columns : ";
    cin >> column ;

    for(int i=0; i<row; i++){

        for(int j=1; j<=column; j++){

            cout << j << " ";
        }
        cout << endl ;
    }
    return 0;
}
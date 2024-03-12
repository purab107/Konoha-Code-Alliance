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

        int alpha = 65;

        for(int j=0; j<column; j++){

            cout << char(alpha) << " ";
            alpha++;
        }
        cout << endl ;
    }
    return 0;
}
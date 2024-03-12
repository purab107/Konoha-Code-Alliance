#include <iostream>
using namespace std;
int main() {

    int row;
    cout << "Enter The Number Of Rows : " ;
    cin >> row ;

    for(int i=1; i<=row; i++ ){

        int alpha = 65;

        for(int j=1; j<=i; j++) {

            if(i%2 == 0) {
                
                cout << char(alpha) << " " ;
                alpha++;

            }
            else{
                
                cout << j << " " ;
            }
        }
        cout << endl;
    }

    return 0;
}
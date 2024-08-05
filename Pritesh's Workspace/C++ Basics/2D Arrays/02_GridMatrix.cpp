/*wap tp store 10 at every index of 2s matrix with 5 rows and 5 columns*/
#include<iostream>
using namespace std;
int main(){

    int grid[5][5];
    for(int i=0; i<5; i++){

        for(int j=0; j<5; j++){

            grid[i][j] = 10;
        }
    }

    for(int i=0; i<5; i++){

        for(int j=0; j<5; j++){

            cout << grid[i][j] << " | " ;
        }
        cout << "\n------------------------" ;
        cout << endl;
    }
}
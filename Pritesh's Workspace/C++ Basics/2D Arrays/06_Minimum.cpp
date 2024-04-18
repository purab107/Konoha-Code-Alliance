#include<iostream>
#include<limits.h>
using namespace std;
int main(){

    int row;
    cout << "Enter The Number of Rows : " ;
    cin >> row;

    int col;
    cout << "Enter The Number of Columns : " ;
    cin >> col ;

    int matA[row][col];
    cout << "\nEnter Elements of Matrix : " << endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << "Enter Element [" << i << "][" << j << "] : ";
            cin >> matA[i][j]; 
        }
    }

    int min = INT_MAX;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(min>matA[i][j]){
                min = matA[i][j];
            }
        }
    }

    cout << "Minimum Value : " << min << endl;

    return 0;


}
#include<iostream>
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

    int sum = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            sum = sum + matA[i][j];
        }
    }

    cout << "Sum : " << sum << endl;


}
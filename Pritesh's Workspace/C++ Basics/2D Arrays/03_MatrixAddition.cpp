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
    cout << "\nEnter Elements of First Matrix : ";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << "Enter Element [" << i << "][" << j << "] : ";
            cin >> matA[i][j]; 
        }
    }

    int matB[row][col];
    cout << "\nEnter Elements of Second Matrix : ";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << "Enter Element [" << i << "][" << j << "] : ";
            cin >> matB[i][j]; 
        }
    }

    cout << "\nAddition : " << endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << matA[i][j] + matB[i][j] << "\t" ;
        }
        cout << endl;
    }


}
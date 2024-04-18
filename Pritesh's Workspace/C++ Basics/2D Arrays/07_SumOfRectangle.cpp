/*given a matrix 'a' of dimension nxm and 2 coordinates (l1,r1) and (l2,r2). Return the sum of the rectangle from (l1,r1) to (l2,r2)*/
#include<iostream>
using namespace std;
int main(){

    int row;
    cout << "Enter The Number of Rows : " ;
    cin >> row;

    int col;
    cout << "Enter The Number of Columns : " ;
    cin >> col ;

    int A[row][col];
    cout << "\nEnter Elements of Matrix : " << endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << "Enter Element [" << i << "][" << j << "] : ";
            cin >> A[i][j]; 
        }
    }

    cout << endl << "Entered Matrix : " << endl ;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << A[i][j] << " " ;
        }
        cout << endl;
    }


    int l1,r1;
    cout << "enter coordinates (l1,r1) 'from (0,0) to (" << row << "," << col << ")' : " ;
    cin >> l1 >> r1 ;

    int l2,r2;
    cout << "enter coordinates (l2,r2) 'from (0,0) to (" << row << "," << col << ")' : " ;
    cin >> l2 >> r2 ;

    int sum = 0;
    for(int i=l1; i<=l2; i++){
        for(int j=r1; j<=r2; j++){
            sum = sum + A[i][j];
        }
    }

    cout << "Sum Of Recatngle From Coordinates (" << l1 << "," << r1 << ") to (" << l2 << "," << r2 << ") : " << sum << endl;

    return 0;

} 
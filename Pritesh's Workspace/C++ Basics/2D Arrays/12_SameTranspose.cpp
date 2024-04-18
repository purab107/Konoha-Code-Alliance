#include <iostream>
using namespace std;
int main(){
    
    int n=3;
    int matA[n][n];
    cout << "\nEnter Elements of Matrix : " << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "Enter Element [" << i << "][" << j << "] : ";
            cin >> matA[i][j]; 
        }
    }
    cout << "\nEntered Matrix : " << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << matA[i][j] << " " ;
        }
        cout << endl;
    }

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int temp = matA[i][j];
            matA[i][j] = matA[j][i];
            matA[j][i] = temp;
        }
    }

    cout << "\nTranspose Matrix : " << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << matA[i][j] << " " ;
        }
        cout << endl;
    }
}
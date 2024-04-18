#include<iostream>
using namespace std;

int main(){

    int m;
    cout << "Enter The Number of Rows in First Matrix : " ;
    cin >> m ;
    
    int n;
    cout << "Enter The Number of Columns in First Matrix : " ;
    cin >> n ;

    int p;
    cout << "Enter The Number of Rows in Second Matrix : " ;
    cin >> p ;
    
    int q;
    cout << "Enter The Number of Columns in Second Matrix : " ;
    cin >> q ;

    if(n!=p){
        cout << endl << "Matrix Multiplication Is Not Possible!" << endl << "Number of Columns Of First Matrix Should Be Equal To The Rows Of Second Matrix " <<endl;
        cout << "KINDLY RESTART THE PROGRAM!" <<endl;
        exit(0);
    }

    int matA[m][n];
    cout << endl << "Enter Elements Of First Matrix : " << endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << "Enter Element [" << i << "][" << j << "] : " ;
            cin >> matA[i][j];
        }
    }

    int matB[p][q];
    cout << endl << "Enter Elements Of Second Matrix : " << endl;
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cout << "Enter Element [" << i << "][" << j << "] : " ;
            cin >> matB[i][j];
        }
    }

    cout << endl << "First Matrix : " << endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << matA[i][j] << " " ;
        }
        cout << endl;
    }

    cout << endl;

    cout << "Second Matrix : " << endl;
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cout << matB[i][j] << " " ;
        }
        cout << endl;
    }

    //MULTIPLICATION
    int resMat[m][q];
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            resMat[i][j] = 0;
            for(int k=0; k<n; k++){
                resMat[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }

    cout << endl << "Resultant Matrix : " << endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            cout << resMat[i][j] << " " ;
        }
        cout << endl;
    }

    return 0 ;
    
}
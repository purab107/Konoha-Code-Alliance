#include<iostream>
using namespace std;
int main() {

    int mat[2][3] = {{1,2,3}, {4,5,6}};
    for(int i=0; i<2; i++){
        for(int j=0;j<3;j++){
            cout << mat[i][j] << "  ";
        }
        cout << endl;
    }
    cout<<endl;
     for(int i=0; i<3; i++){
        for(int j=0;j<2;j++){
            cout << mat[j][i] << "  ";
        }
        cout << endl;
    }

   
}
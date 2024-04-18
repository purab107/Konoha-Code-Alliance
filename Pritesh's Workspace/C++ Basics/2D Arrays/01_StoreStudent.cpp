/*wap to store roll number and marks obtained by 4 students side by side in a matrix*/
#include<iostream>
using namespace std;

int main(){

    int studentInfo[4][2];
    for(int i=0; i<4; i++){

        cout << "Enter The Roll Number : " ;
        cin >> studentInfo[i][0];


        for(int j=1; j<2; j++){
            
            cout << "Enter The Marks : " ;
            cin >> studentInfo[i][j];
        }
    }

    cout << "ROLLNO\tMARKS" << endl;

    for(int i=0; i<4; i++){

        cout << studentInfo[i][0] << "\t";

        for(int j=1; j<2; j++){

            cout << studentInfo[i][j] ;
        }

        cout << endl;
    }
}
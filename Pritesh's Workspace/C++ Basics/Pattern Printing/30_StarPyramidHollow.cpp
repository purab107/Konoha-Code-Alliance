#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter Number Of Rows : ";
    cin  >> n;
    int numOfSpace = 1;
    int numOfStars = n;

    for(int i=1; i<=2*n+1; i++){
        cout << "* ";
    }
    cout << endl;

    for(int i=1; i<=n; i++){

        for(int j=1; j<=numOfStars; j++){

            cout << "* ";
        }

        for(int k=1; k<=numOfSpace; k++){

            cout << "  " ;
        }

        for(int m=1; m<=numOfStars; m++) {

            cout << "* " ;
        }

        numOfStars--;
        numOfSpace+=2;

        cout << endl;
    }
}
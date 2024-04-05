#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter Number Of Rows : ";
    cin  >> n;
    int numOfSpace = 1;
    int numOfStars = n-1;

    for(int i=1; i<=2*n-1; i++){
        cout << i << " ";
    }
    cout << endl;

    for(int i=1; i<=n; i++){

        int s = 1;

        for(int j=1; j<=numOfStars; j++){

            cout << s << " ";
            s++;
        }

        for(int k=1; k<=numOfSpace; k++){

            cout << "  " ;
            s++;
        }

        for(int m=1; m<=numOfStars; m++) {

            cout << s << " " ;
            s++;
        }

        numOfStars--;
        numOfSpace+=2;

        cout << endl;
    }
}
#include <iostream>
using namespace std;
int main() {

    int n;
    cout << "Enter The Number Of Rows : ";
    cin >> n ;

    int numOfSpace = n/2;
    int numOfStars = 1;
    int midPoint = n/2 + 1;
    
    for(int i=1; i<=n; i++){

        for(int j=1; j<=numOfSpace; j++){

            cout << "  " ; 
        }

        for(int k=1; k<=numOfStars; k++){

            cout << "* ";
        }

        if(i<midPoint){
            numOfSpace--;
            numOfStars+=2;
        }
        else{
            numOfSpace++;
            numOfStars-=2;
        }

        cout << endl;
    }
    return 0;
}
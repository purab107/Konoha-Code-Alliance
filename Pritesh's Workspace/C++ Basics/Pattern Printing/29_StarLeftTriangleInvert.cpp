#include <iostream>
using namespace std;
int main() {

    int n;
    cout << "Enter Number Of Rows : " ;
    cin >> n ;

    /*TO PRINT :
    * * * *
      * * *
        * *
          * 
    */

   int numOfSpace = 0;
   int numOfStars = n;

   for(int i=1; i<=n; i++){

    for(int j=1; j<=numOfSpace; j++){
        cout << "  ";
    }

    for(int k=1; k<=numOfStars; k++){

        cout << "* ";
    }

    numOfSpace++;
    numOfStars--;

    cout <<  endl;
   }
}
#include <iostream>
using namespace std;
int main() {

    int n;
    cout << "Enter Any Odd Number : ";
    cin >> n ;

    for(int i=1; i<=n; i++){

        if(i==1 or i==n){

            for(int j=1; j<=n; j++){

                if(j==1 or j==n) {

                    cout << "* " ;
                }
                else{

                    cout << "  ";
                }
            }
            cout << endl;
        }

        if(i == (n/2)+1 ){

            for(int j=1; j<=n; j++){

                if(j == (n/2)+1){

                    cout << "* " ;
                }
                else{
                    cout << "  ";
                }
            }
            cout << endl;
        }

        if(i % 2 == 0){

            for(int j=1; j<=n; j++){

                if(j % 2 == 0) {

                    cout << "* " ;
                }
                else{

                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}


// Time Complexcity 0(n^2)
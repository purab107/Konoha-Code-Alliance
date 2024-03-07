#include <iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter The Value Of Nth Term : " ;
    cin >> n ;

    for(int i=1; i<=2*n-1; i=i+2){

        cout << i << "\t" ;
    }
    return 0; 
}
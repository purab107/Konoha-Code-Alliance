#include <iostream>
using namespace std;
int main() {

    int n;
    cout << "Enter The Value Of Nth Term : " ;
    cin >> n ;

    for(int i=4; i<=3*n+1; i=i+3){

        cout << i << "\t" ;
    }

    return 0;
}
/*1,2,4,8,16,32*/
#include <iostream>
using namespace std;
int main() {

    int n;
    cout << "Enter The Value Of Nth Term : " ;
    cin >> n ;
    int a = 1;

    for(int i=1; i<=n; i++){

        cout << a << "\t" ;
        a = a * 2;
    }
    return 0;
}
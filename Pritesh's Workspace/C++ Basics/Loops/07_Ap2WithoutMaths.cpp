#include <iostream>
using namespace std;
int main() {

    int n;
    cout << "Enter The Value Of Nth Term : " ;
    cin >> n ;
    int a = 4;

    for(int i=1; i<=n; i++){

        cout << a << "\t" ;
        a = a + 3;
    }
    return 0;
}
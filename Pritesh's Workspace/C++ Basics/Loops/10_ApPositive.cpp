/*100, 97, 94 upto positive number*/
#include <iostream>
using namespace std;
int main() {

    int a = 100;
    for(int i=1; a>0; i++){

        cout << a << "\t" ;
        a = a - 3;
    }
    return 0;
}
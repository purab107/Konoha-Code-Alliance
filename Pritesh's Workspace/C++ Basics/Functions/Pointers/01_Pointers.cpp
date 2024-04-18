#include <iostream>
using namespace std;
int main() {

    int a = 5;
    int* x = &a;

    cout << x << endl; //address of a=5
    cout << addressof(x) << endl;  //address of x
    cout << *x << endl; //value fetch

    return 0;
}
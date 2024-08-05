#include <iostream>
using namespace std;
int main() {

    int a = 5;
    int* x = &a;
    int** y = &x;

    cout << addressof(x) << endl; //adress of x
    cout << y << endl; //adress of x
    cout << *y << endl; //address of a
    cout << **y << endl;//value fetch

    return 0;
}
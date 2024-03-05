#include <iostream>
using namespace std;
int main() {
    //C=2πr
    float radius;
    cout << "Enter The Radius Of The Circle : " << endl;
    cin >> radius ;
    float circum;
    circum = 2 * 3.142857142857143 * radius;
    cout << "Circumference Of The Circle : " << circum << endl;
    return 0;
}
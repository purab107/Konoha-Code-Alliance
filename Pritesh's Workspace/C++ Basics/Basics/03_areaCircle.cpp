#include <iostream>
using namespace std;
int main() {
    // A=πr2
    float radius;
    cout << "Enter The Radius Of The Circle : " << endl;
    cin >> radius ;
    float area;
    area = 3.142857142857143 * radius * radius;
    cout << "Area Of The Circle : " << area << endl;
    return 0;
}
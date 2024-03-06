/*take 3 numbers input and tell if they can be the sides of a triangle*/

#include <iostream>
using namespace std;
int main() {

    int side1;
    cout << "Enter The First Side  : " << endl;
    cin >> side1;

    int side2;
    cout << "Enter The Second Side  : " << endl;
    cin >> side2;

    int side3;
    cout << "Enter The Third Side  : " << endl;
    cin >> side3;

    if((side1+side2)>side3 and (side2+side3)>side1 and (side1+side3)>side2){
        cout << "VALID TRIANGLE" << endl;
    }
    else{
        cout << "INVALID TRIANGLE" << endl;
    }

    return 0;
}
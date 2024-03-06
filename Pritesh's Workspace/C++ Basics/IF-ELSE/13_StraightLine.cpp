/*given three points (x1,y1), (x2,y2), (x3,y3). wap to check if all the three points
fall on one straight line.*/

// slope1 = y2 - y1 / x2 - x1 , slope2 = y3 - y2 / x3 - x2
// if (slope1 = slope2) -> straight line

#include <iostream>
using namespace std;
int main() {

    double x1,y1;
    cout << "Enter Points (x1, y1) : ";
    cin >> x1 >> y1;

    double x2,y2;
    cout << "Enter Points (x2, y2) : ";
    cin >> x2 >> y2;

    double x3,y3;
    cout << "Enter Points (x3, y3) : ";
    cin >> x3 >> y3;

    double m1 = (y2-y1) / (x2-x1);
    double m2 = (y3-y2) / (x3-x2);

    if(m1==m2){
        cout << "Given Points Fall On One Straight Line." << endl;
    }
    else{
        cout << "Given Points Does Not Fall On One Straight Line." << endl;
    }

    return 0;
}
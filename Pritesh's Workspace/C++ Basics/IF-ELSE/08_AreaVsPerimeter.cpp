/*given the length and breadth of a rectangle, wap to find whether the area
of the rectangle is greater than its perimeter*/

// area of rec = length * breadth
// perimeter of rec = 2(length + breadth)

#include <iostream>
using namespace std;
int main () {

    float length;
    cout << "Enter The Length Of The Rectangle : ";
    cin >> length ;

    float breadth;
    cout << "Enter The Breadth Of The Rectangle : ";
    cin >> breadth ;

    float area = length * breadth;
    float perimeter = 2 * (length + breadth);

    cout <<  "Area Of Rectangle : " << area << endl;
    cout << "Perimeter Of Rectangle : " << perimeter << endl;

    if(area == perimeter){
        cout << "Area Of Rectangle Is Equal To It's Perimeter" << endl;
    }
    else if(area > perimeter){
        cout << "Area Of Rectangle Is Greater Than It's Perimeter" << endl;
    } 
    else{
        cout << "Area Of Rectangle Is Smaller Than It's Perimeter" << endl;
    }

    return 0;
}
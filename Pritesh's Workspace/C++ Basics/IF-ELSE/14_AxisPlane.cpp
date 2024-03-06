/*given a point (x,y) wap to find out if it lies on the x-axis, y-axis or at origin*/
/*x axis -> (x,0)*/
/*y axis -> (0,y)*/
/*origin -> (0,0)*/

#include <iostream>
using namespace std;
int main() {

    int x,y;
    cout << "Enter Coordinates X and Y : " ;
    cin >> x >> y ;
    if(x==0 and y==0){

        cout << "Coordinates Lies At The Origin" << endl;
    }
    else if(x!=0 and y==0){

        cout << "Coordinates Lies On X - Axis" << endl;
    }
    else if(x==0 and y!=0){

        cout << "Coordinates Lies On Y - Axis" << endl;
    }
    else{
        cout << "Coordinates Lies In Quadrants" << endl;
    }
    return 0;
}
/*wap to print the row number having the maximum sum in a given matrix*/
#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int mat[3][4] = {{1,2,3,1}, {0,5,0,5}, {9,0,0,3}};
    int maxSum = INT_MIN;
    int maxRow = -1;

    for(int i=0; i<3; i++) {
        int sum = 0;
        for(int j=0; j<4; j++) {
            sum += mat[i][j];
        }
        if (sum > maxSum) {
            maxSum = sum;
            maxRow = i;
        }
    }

    cout << "Row with maximum sum: " << maxRow + 1 << endl;
    cout << "Maximum sum: " << maxSum << endl;

    return 0;
}

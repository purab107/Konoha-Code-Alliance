#include<iostream>
using namespace std;

int maze(int currentRow, int currentColumn, int endRow, int endColumn){

    int rightWays = 0;
    int downWays = 0;

    if(currentRow == endRow and currentColumn == endColumn) return 1;

    if(currentRow == endRow){

        rightWays += maze(currentRow, currentColumn+1, endRow, endColumn);
    }

    if(currentColumn == endColumn){

        downWays += maze(currentRow+1, currentColumn, endRow, endColumn);
    }

    if(currentRow < endRow and currentColumn < endColumn){

        rightWays += maze(currentRow, currentColumn+1, endRow, endColumn);
        downWays += maze(currentRow+1, currentColumn, endRow, endColumn);
    }

    int totalWays = rightWays + downWays;
    return totalWays;
}

int main(){

    int row;
    cout << "Enter The Number Of Rows : ";
    cin >> row;

    int col;
    cout << "Enter Number Of Columns : ";
    cin >> col;

    cout << "Total Number Of Ways To Complete The Maze : " << maze(1,1,row,col) << endl;

    return 0;
}
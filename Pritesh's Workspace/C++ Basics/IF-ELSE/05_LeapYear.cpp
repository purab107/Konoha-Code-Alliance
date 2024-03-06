// CONSIDERING LEAP YEAR OCCURS AFTER EVERY FOUR YEARS
#include <iostream>
using namespace std;
int main(){

    int year;
    cout << "Enter Any Year : " ;
    cin >> year ;
    if(year % 4 == 0){
        cout << "LEAP YEAR!" << endl;
    }
    else{
        cout << "NOT A LEAP YEAR" << endl;
    }
    return 0;
}

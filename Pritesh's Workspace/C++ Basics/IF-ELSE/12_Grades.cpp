/*take input percentage of a student and print the grade according to marks

1) 90-100 EXCELLENT
2) 80-90 VERY GOOD
3) 70-80 GOOD
4) 60-70 CAN DO BETTER
5) 50-60 AVERAGE
6) 40-50 BELOW AVERAGE
7) <40 FAIL*/

#include <iostream>
using namespace std;
int main() {

    float marks;
    cout << "Enter Marks in Percent : " ;
    cin >> marks ;

    if(marks>=90 and marks<=100){
        cout << "EXCELLENT " << endl;
    }
    else if(marks>=80 and marks<=90){
        cout << "VERY GOOD " << endl;
    }
    else if(marks>=70 and marks<=80){
        cout << "GOOD " << endl;
    }
    else if(marks>=60 and marks<=70){
        cout << "CAN DO BETTER "<< endl;
    }
    else if(marks>=50 and marks<=50){
        cout << "AVERAGE " << endl;
    }
    else if(marks>=40 and marks<=50){
        cout << "BELOW AVERAGE "<< endl;
    }
    else if(marks < 40){
        cout << "FAIL" << endl;
    }
    else{
        cout << "INVALID MARKS" << endl;
    }
    return 0;
}
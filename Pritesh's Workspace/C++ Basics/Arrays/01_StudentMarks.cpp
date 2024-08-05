/*Given an array of marks of students if the mark of any student is less than 35, print its roll  number
[roll number refers to the index of the array]*/
#include <iostream>
using namespace std;

int main(){

    int marks[] = {90,20,56,93,86,54,38,99,10,32}; //initialisation
    int length = sizeof(marks)/sizeof(marks[0]); //finding the length of array
    for(int i=0; i<length; i++){
        if(marks[i] < 35){
            cout << "Roll Number : " << i << endl;
        }
    }
    return 0;
}
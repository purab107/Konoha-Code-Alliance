/*Given an array containing elements from 1 to n, except one element in this range is missing
Find the missing element*/

/*LEET CODE QUES*/

#include <iostream>
using namespace std;

int main() {
    
    //Suppose
    int n = 10;
    int arr[] = {1,2,3,4,5,6,7,9,10}; //8 missing
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int sum1 = 0;
    for(int i=0; i<size; i++){
        sum1 = sum1 + arr[i];
    }

    int sum2 = (n*(n+1))/2;

    int missingElement = sum2 - sum1;

    cout << "The Missing Element : " << missingElement << endl;

    return 0;
}

#include <iostream>
#include <limits.h>
using namespace std;

int main(){

    int n;
    cout << "Enter The Size Of The Array : " ;
    cin >> n ;

    int arr[n];
    cout << "Enter Array Elements : " << endl;
    for(int i=0; i<n; i++){
        cout << "Enter Element [" << i << "]" << " : " ;
        cin >> arr[i] ;
        
    }

    int max = INT_MIN ;
    int secondMax = INT_MIN;
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            secondMax = max;
            max = arr[i];
        }
        else if(secondMax<arr[i] and max!=arr[i]){
            secondMax = arr[i];
        }
    }

    cout << "Second Maximum Value : " << secondMax << endl;

    return 0;  
}
/*rotate the given array 'a' by k steps, where k is non negative
note : k can be greater than n as well where n is the size of array*/

#include <iostream>
using namespace std;

void reverserArray(int arr[], int startIndex, int endIndex){
    for(int i=startIndex, j=endIndex; i<j; i++, j--){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
    return;
}

int main() {
    int n;
    cout << "Enter The Size Of Array : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter Element [" << i << "] : ";
        cin >> arr[i];
    }

    int k;
    cout << "Enter Any Number : ";
    cin >> k ;

    if(k>n){
        k = k%n;
    }

    reverserArray(arr,0,n-1); // 1,2,3,4,5 -> 5,4,3,2,1
    reverserArray(arr,0,k-1); // 5,4,3,2,1 -> 4,5,3,2,1
    reverserArray(arr,k,n-1); // 4,5,3,2,1 -> 4,5,1,2,3

    for(int i=0; i<n; i++){
        cout << arr[i] << "\t" ;
    }
    return 0;
}

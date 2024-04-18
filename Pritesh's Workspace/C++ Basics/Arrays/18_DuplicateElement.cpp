#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,4,4,5,6,7};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i=0, j=i+1; i<size,j<size; i++,j++){
        if(arr[i] == arr[j]){
            cout << arr[i] << " is the duplicate element" << endl;
            break;
        }
    }
    return 0;

}
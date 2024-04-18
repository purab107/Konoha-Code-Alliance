#include <iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int i = 0;
    int j = n - 1;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

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

    reverseArray(arr,n) ;

    for(int i=0; i<n; i++){
        cout << arr[i] << "\t" ;
    }


}
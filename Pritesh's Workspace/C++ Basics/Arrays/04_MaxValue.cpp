#include <iostream>
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

    int max = arr[0];
    for(int i=1; i<=n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << "Maximum Value : " << max << endl;
    return 0;  
}
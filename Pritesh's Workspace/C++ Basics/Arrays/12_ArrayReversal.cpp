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

    int rev[n];
    for(int i=0; i<n; i++){
        rev[i] = arr[n-1-i];
    }

    for(int i=0; i<n; i++){
        cout << rev[i] << "\t" ;
    }


}
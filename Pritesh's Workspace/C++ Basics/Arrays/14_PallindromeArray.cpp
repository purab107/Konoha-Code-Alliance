#include <iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter The Size Of Array : ";
    cin >> n ;

    int arr[n];
    for(int i=0; i<n; i++){
        
        cout << "Enter Element [" << i << "]" << " : " ;
        cin >> arr[i] ;
    }

    int rev[n];
    for(int i=0; i<n; i++){
        rev[i] = arr[n-1-i];
    }

    int pallindrome = 0;
    for(int i=0; i<n/2; i++){
        if(rev[i] == arr[n-1]){
            pallindrome++;
        }
    }

    if(pallindrome == n/2){
        cout << "Array Is Pallindrome" << endl;
    }
    else{
        cout << "Array Is Not Pallindrome" << endl;
    }

    return 0;
}
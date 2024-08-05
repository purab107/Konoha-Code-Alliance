/*Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10*/
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

    for(int i=0; i<n; i++){
        if(i%2==0){
            arr[i] = arr[i] + 10;
        }
        else{
            arr[i] = arr[i] * 2;
        }
    }

    for(int i=0; i<n; i++){

        cout << arr[i] << endl;
    }
    return 0;  
}
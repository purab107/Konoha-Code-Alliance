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

    int key;
    cout << "Enter The Key : " ;
    cin >> key;

    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > key) {
            count ++;
        }
    }

    cout << "Number Of Elements Greater Than " << key << " : " << count << endl;
    return 0;  
}
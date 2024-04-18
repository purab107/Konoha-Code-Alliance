#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter The Size Of The Array : " ;
    cin >> n ;

    int arr[n];
    int product=1;
    cout << "Enter Array Elements : " << endl;
    for(int i=0; i<n; i++){
        cout << "Enter Element [" << i << "]" << " : " ;
        cin >> arr[i] ;
        product = product * arr[i];
        
    }
    
    cout << "Product : " << product << endl;
    return 0; 
}
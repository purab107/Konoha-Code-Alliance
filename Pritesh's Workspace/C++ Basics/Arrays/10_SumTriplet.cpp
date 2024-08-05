/*find the total number of triplets in the array whose sum is equal to the given value x*/
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

    int x;
    cout << "Enter Any Number : " ;
    cin >> x;

    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1;j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i] + arr[j] + arr[k] == x){
                count ++;
            }
            }
        }
    }

    cout << "Total Number of Triplets : " << count << endl;
    return 0;  
}
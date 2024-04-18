#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter The Size Of The Array : " ;
    cin >> n ;

    int arr[n];
    int evenSum = 0;
    int oddSum = 0;
    cout << "Enter Array Elements : " << endl;
    for(int i=0; i<n; i++){
        cout << "Enter Element [" << i << "]" << " : " ;
        cin >> arr[i] ;
        if(i%2==0){
            evenSum = evenSum + arr[i];
        }
        else{
            oddSum = oddSum + arr[i] ;
        }
        
    }
    int result = evenSum - oddSum;
    cout << "Difference Between Sum Of Even Indexed Elements and Odd Indexed Elements : " << result << endl;
    return 0;  
}
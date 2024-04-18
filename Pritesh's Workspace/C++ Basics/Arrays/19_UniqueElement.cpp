/*find the unique number in a given array where all the elements are being repeated twice with one value being unique*/
#include <iostream>
using namespace std;
int main(){

    int arr[] = {1,2,3,2,1,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<size; i++){

        bool flag = false;
        for(int j=i+1; j<size; j++){

            if(arr[i] == arr[j]){
                flag = true;
                
            }
        }
        if(flag==false){
            cout << arr[i] << endl;
            break;
        }
    }



}
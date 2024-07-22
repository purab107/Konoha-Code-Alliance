#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    
    for(int i=0; i<size; i++){
        std::cout << arr[i] << " " ;
    }
    std::cout << std::endl;
}

void selectionSortAlgo(int arr[], int size){

    int indexOfMid;
    for(int i=0; i<size-1; i++){
        indexOfMid = i;
        for(int j=i+1; j<size; j++){
            if(arr[indexOfMid] > arr[j]){
                indexOfMid = j;
            }
        }
        int temp = arr[indexOfMid];
        arr[indexOfMid] = arr[i];
        arr[i] = temp;
    }   
}
 
int main() {
    
    int arr[100] = {4,2,8,5,6,3};
    int size = 6;

    printArray(arr,size);

    selectionSortAlgo(arr,size);

    printArray(arr,size);

    return 0;
}
#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    
    for(int i=0; i<size; i++){
        std::cout << arr[i] << " " ;
    }
    std::cout << std::endl;
}

void insertionSortAlgo(int arr[], int size){
    for(int i=1; i<=size-1; i++){
        int j = i;
        while(j >= 1 && arr[j] < arr[j-1]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp ;
            j--;
        }
    }
}
 
int main() {
    
    int arr[100] = {4,2,8,5,6,3};
    int size = 6;

    printArray(arr,size);

    insertionSortAlgo(arr,size);

    printArray(arr,size);

    return 0;
}
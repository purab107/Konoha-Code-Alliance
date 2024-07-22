#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    
    for(int i=0; i<size; i++){
        std::cout << arr[i] << " " ;
    }
    std::cout << std::endl;
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;  
}

int partition(int arr[], int low, int high){

    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    while(j>i){
        if(arr[i])
    }

    

}

void quickSortAlgo(int arr[], int low, int high){
    
    if(low<high){

        int partitionIndex = partition(arr, low, high);
        quickSortAlgo(arr, low, partitionIndex - 1);
        quickSortAlgo(arr, partitionIndex + 1, high);
    }
}
 
int main() {
    
    int arr[100] = {4,2,8,5,6,3};
    int size = 6;

    printArray(arr,size);

    quickSortAlgo(arr,0,size-1);

    printArray(arr,size);

    return 0;
}
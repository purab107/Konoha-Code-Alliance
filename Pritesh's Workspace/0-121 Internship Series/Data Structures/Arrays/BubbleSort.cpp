#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    
    for(int i=0; i<size; i++){
        std::cout << arr[i] << " " ;
    }
    std::cout << std::endl;
}

void bubbleSortAlgo(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
 
int main() {
    
    int arr[100] = {4,2,8,5,6,3};
    int size = 6;

    printArray(arr,size);

    bubbleSortAlgo(arr,size);

    printArray(arr,size);

    return 0;
}
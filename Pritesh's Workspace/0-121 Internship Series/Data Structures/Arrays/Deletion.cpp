#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    
    for(int i=0; i<size; i++){
        std::cout << arr[i] << " " ;
    }
}

void arrayDeletion(int arr[], int size, int position){

    if(position > size || position < 0){
        std::cout << "\nDeletion Not Possible" << std::endl;
        exit(0);
    }

    for(int i = position; i < size-1; i++){

        arr[i] = arr[i+1];
    }

}
 
int main() {
    
    int arr[100] = {2,4,5,6,7,8};
    int size = 6;

    int position;
    std::cout << "Enter The Position Between (" << 0 << " to " << size << ") : ";
    std::cin >> position;

    printArray(arr,size);
    arrayDeletion(arr, size, position);
    size--;
    std::cout << std::endl;
    printArray(arr,size);

    return 0;
}
#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    
    for(int i=0; i<size; i++){
        std::cout << arr[i] << " " ;
    }
}

void arrayInsertion(int arr[], int size, int position, int element){

    if(position > size || position < 0){
        std::cout << "\nInsertion Not Possible" << std::endl;
        exit(0);
    }

    for(int i=size; i>=position; i--){
        arr[i] = arr[i-1];
    }
    arr[position] = element;
    return;

}
 
int main() {
    
    int arr[100] = {2,4,5,6,7,8};
    int size = 6;

    int position;
    std::cout << "Enter The Position Between (" << 0 << " to " << size << ") : ";
    std::cin >> position;

    int element;
    std::cout << "Enter The Element : ";
    std::cin >> element;

    printArray(arr,size);
    arrayInsertion(arr, size, position, element);
    size++;
    std::cout << std::endl;
    printArray(arr,size);

    return 0;
}
#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    
    for(int i=0; i<size; i++){
        std::cout << arr[i] << " " ;
    }
    std::cout << std::endl;
}

int linearSearch(int arr[], int size, int element){

    for(int i=0; i<size; i++){
        if(arr[i] == element){
            return i;
        }
    }
    std::cout << "Element Not Found!" << std::endl;
    exit(0);
}
 
int main() {
    
    int arr[100] = {2,4,5,6,7,8};
    int size = 6;

    printArray(arr,size);

    int element;
    std::cout << "Enter The Element You Wanna Search : " ;
    std::cin >> element ;

    int searchIndex = linearSearch(arr, size, element);

    std::cout << "Element " << element << " Is Present At Index : " << searchIndex << std::endl;

    return 0;
}
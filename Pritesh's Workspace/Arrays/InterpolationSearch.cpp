#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    
    for(int i=0; i<size; i++){
        std::cout << arr[i] << " " ;
    }
    std::cout << std::endl;
}

// Interpolation Search is Best for arrays having uniformly distributed data
int interpolationSearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;
    
    while(key >= arr[start] && key <= arr[end] && start <= end ){
        
        int probe = (end - start) * (key - arr[start]) / (arr[end] - arr[start]); //making a guess where the element can be

        if(arr[probe] == key){
            return probe; 
        }

        else if(arr[probe] > key){
            end = probe - 1;
        }
        else{
            start = probe + 1;
        }
    }

    return -1;
    
}
 
int main() {
    
    int arr[100] = {2,4,5,6,7,8};
    int size = 6;

    printArray(arr,size);

    int key;
    std::cout << "Enter The Element You Wanna Search : " ;
    std::cin >> key ;

    int searchIndex = interpolationSearch(arr, size, key);

    std::cout << "Element " << key << " Is Present At Index : " << searchIndex << std::endl;

    return 0;
}
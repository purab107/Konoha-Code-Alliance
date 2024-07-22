#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    
    for(int i=0; i<size; i++){
        std::cout << arr[i] << " " ;
    }
    std::cout << std::endl;
}

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;
    while(start<=end){

        int mid = start + (end - start) / 2;
        //optional
        if(arr[start] == key) return start;
        if(arr[end] == key) return end;
        //classic binary search
        if(arr[mid] == key) return mid;
        if(arr[mid] > key) end = mid-1;
        if(arr[mid] < key) start = mid+1;
    }
    std::cout << "Element Not Found!" << std::endl;
    exit(0); // don't use this, return -1
}
 
int main() {
    
    int arr[100] = {2,4,5,6,7,8};
    int size = 6;

    printArray(arr,size);

    int key;
    std::cout << "Enter The Element You Wanna Search : " ;
    std::cin >> key ;

    int searchIndex = binarySearch(arr, size, key);

    std::cout << "Element " << key << " Is Present At Index : " << searchIndex << std::endl;

    return 0;
}
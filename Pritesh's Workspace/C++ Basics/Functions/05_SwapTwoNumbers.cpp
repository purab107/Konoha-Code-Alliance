#include <iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main() {

    int a, b ;
    cout << "Enter Two Numbers : " ;
    cin >> a >> b ;

    cout << "Before Swap : " << a << " " << b << endl;
    swap(&a, &b);
    cout << "After Swap  : " << a << " " << b << endl;

    return 0;
} 
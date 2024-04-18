#include<iostream>
using namespace std;

void traversing(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void deletion(int arr[], int &n) {
    int item;
    cout << "Enter element you want to delete: ";
    cin >> item;

    int i;
    for (i = 0; i < n; i++) {
        if(arr[i] == item) {
            break;
        }
    }

    if (i == n) {
        cout << "Element not found\n";
        return;
    }

    for (int j = i; j < n - 1; j++) {
        arr[j] = arr[j + 1];
    }

    n--;
    cout << "Element " << item << " deleted successfully\n";
}

void searching(int arr[], int n) {
    int item;
    cout << "Enter element you want to search: ";
    cin >> item;

    int found = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == item) {
            cout << "Element found at index " << i << endl;
            found = 1;
            break;
        }
    }

    if(!found) {
        cout << "Element not found\n";
    }
}

void insertion(int arr[], int &n) {
    int item, index;
    cout << "Enter element you want to insert: ";
    cin >> item;
    cout << "Enter index where you want to insert (0-based index): ";
    cin >> index;

    if (index < 0 || index > n) {
        cout << "Invalid index\n";
        return;
    }

    for(int i = n - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    arr[index] = item;
    n++;
    cout << "Element " << item << " inserted at index " << index << endl;
}

int main() {
    int arr[100];
    int n;
    int ch;

    cout << "Enter no. of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "Enter:\n1. traversing\n2. Insertion\n3. Deletion\n4. Searching\n5. Exit\n";
        cin >> ch;

        switch(ch) {
            case 1:
                traversing(arr, n);
                break;
            case 2:
                insertion(arr, n);
                break;
            case 3:
                deletion(arr, n);
                break;
            case 4:
                searching(arr, n);
                break;
            case 5:
                break;
            default:
                cout << "Invalid choice\n";
                break;
        }
    } while (ch != 5);
    
    return 0;
}

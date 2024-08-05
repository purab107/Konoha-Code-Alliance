#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter The Size Of Array : ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter Element [" << i << "] : ";
        cin >> arr[i];
    }

    vector<int> rev(n);
    for (int i = 0; i < n; i++) {
        rev[i] = arr[n - 1 - i];
    }

    bool palindrome = true;
    for (int i = 0; i < n; i++) {
        if (rev[i] != arr[i]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome) {
        cout << "Array Is Palindrome" << endl;
    } else {
        cout << "Array Is Not Palindrome" << endl;
    }

    return 0;
}

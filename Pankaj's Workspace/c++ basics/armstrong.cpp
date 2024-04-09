#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp, t, n = 0, ans = 0;
    cout << "Enter an integer: ";
    cin >> num;
    temp = num;

    while (temp != 0) {
        temp /= 10;
        ++n;
    }

    temp = num;

    while (temp != 0) {
        t = temp % 10;
        ans += pow(t, n);
        temp /= 10;
    }

    if (ans == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}

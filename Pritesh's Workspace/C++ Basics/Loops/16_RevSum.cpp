/*wap to print the sum of given number and its reverse*/
#include <iostream>
using namespace std;
int main(){

    int num;
    cout << "Enter Any Number : ";
    cin >> num;
    int temp = num;

    // Reversing The Number
    int rev=0;
    while(temp!=0){

        rev =  rev * 10;
        rev = rev + (temp%10);
        temp = temp / 10;
        
    } 
    cout << num << " + " << rev << " = " << num + rev << endl;

    
    return 0;
}
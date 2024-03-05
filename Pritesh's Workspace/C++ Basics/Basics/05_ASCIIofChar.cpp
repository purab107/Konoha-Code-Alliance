#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter The Character Of Whom You Wanna Find The ASCII Value : ";
    cin >> ch ;
    // I AM USING TYPECASTING 
    cout << "ASCII Value Of " << ch << " is " << int(ch) << endl;
    return 0;
}
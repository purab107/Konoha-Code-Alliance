#include<iostream>
using namespace std;

int stairWaysCount(int n){

    if(n<=2) return n;
    return stairWaysCount(n-1) + stairWaysCount(n-2);
}

int main(){

    int n;
    cout << "Enter Any Number : " ;
    cin >> n;

    cout << "Number Of Ways To Cilmb The Stair Path : " << stairWaysCount(n) << endl;

    return 0;
}
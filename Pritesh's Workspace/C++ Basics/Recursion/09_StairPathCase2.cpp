#include<iostream>
using namespace std;

int stairWaysCount(int n){

    if(n<=3) return n;
    return stairWaysCount(n-1) + stairWaysCount(n-2) + stairWaysCount(n-3);
}

int main(){

    int n;
    cout << "Enter Any Number : " ;
    cin >> n;

    cout << "Number Of Ways To Cilmb The Stair Path : " << stairWaysCount(n) << endl;

    return 0;
}
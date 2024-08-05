#include <iostream>
using namespace std;

int min(int a, int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

int gcd(int a, int b){

    int hcf;
    for(int i=min(a,b); i>=1; i--){

        if(a%i==0 and b%i==0){
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main() {

    int a;
    cout << "Enter The First Number : " ;
    cin >> a;

    int b;
    cout << "Enter The Second Number : " ;
    cin >> b;

    int hcf = gcd(a,b);

    cout << "HCF : " << hcf << endl;
}
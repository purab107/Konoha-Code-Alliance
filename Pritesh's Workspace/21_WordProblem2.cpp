/*wap to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop (capital case)*/
#include <iostream>
using namespace std;
int main(){

    int variable = 65;
    while(variable<91){
        cout << "ASCII CODE OF " << char(variable) << " : " << variable << endl ;
        variable++; 
    }


    return 0;
}
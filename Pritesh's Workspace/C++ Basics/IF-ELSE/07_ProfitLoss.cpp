/* if cost price and selling price of an item is input through the keyboard write a program
to determine whether the seller has made profit or incurred loss. Also determine how much
profit he made or loss he incurred.*/

#include <iostream>
using namespace std;
int main() {

    int costPrice;
    cout << "Enter Cost Price : ";
    cin >> costPrice ;

    int sellingPrice;
    cout << "Enter Selling Price : ";
    cin >> sellingPrice ;

    if(sellingPrice == costPrice){

        cout << "No Profit, No Loss" << endl ;
    }
    else if (sellingPrice > costPrice){

        cout << "Gained Profit Of " << sellingPrice - costPrice << endl;
    }
    else{

        cout << "Incurred Loss of " << costPrice - sellingPrice << endl;
    }


    return 0;
}
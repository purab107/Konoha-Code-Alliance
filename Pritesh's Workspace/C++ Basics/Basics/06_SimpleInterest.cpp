#include <iostream>
using namespace std;
int main()
{

    float Principle;
    cout << "Enter The Value Of Principle : ";
    cin >> Principle;

    float Rate;
    cout << "Enter The Value Of Rate Of Interest Per Annum : ";
    cin >> Rate;

    float Time;
    cout << "Enter The Value Of Time : ";
    cin >> Time;

    float simpleInterest;
    simpleInterest = (Principle * Rate * Time) / 100;
    cout << "Simple Interest : " << simpleInterest << endl;
    
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three number:";
    cin>>a>>b>>c;
    
    cout<<"Largest number is ";
    (a>b?(a>c?cout<<a:c>b?cout<<c:cout<<b):b>c?cout<<b:cout<<c);

    return 0;
}
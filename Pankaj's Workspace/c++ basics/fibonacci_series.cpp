#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no. of elements:";
    cin>>n;

    int a=0,b=1,c;

    for(int i=0;i<n;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }

    return 0;
}
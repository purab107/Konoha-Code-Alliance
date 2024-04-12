#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;

    int l;
    cout<<"Enter limit:";
    cin>>l;

    for(int i=1;i<=l;i++)
    {
        cout<<n<<"*"<<i<<" = "<<n*i<<endl;
    }

    return 0;
}
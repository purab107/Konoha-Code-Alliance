#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    cout<<"Enter first number:";
    cin>>n;

    int n2;
    cout<<"Enter last number:";
    cin>>n2;

    int l;
    cout<<"Enter limit:";
    cin>>l;

    for(int i=1;i<=l;i++)
    {
        for(int j=n;j<=n2;j++)
        {
            cout<<setw(3)<<j*i<<" ";
        }
        cout<<endl;
    }

    return 0;
}
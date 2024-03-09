#include<iostream>
using namespace std;

int main()
{
    int c;
    cout<<"Enter no. of columns:";
    cin>>c;

    for(int i=c;i>0;i--)
    {
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }

        for(int k=c;k>=i;k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

   for(int i=0;i<c-1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<" ";
        }

        for(int k=c-1;k>i;k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
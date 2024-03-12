#include<iostream>
using namespace std;

int main()
{
    int r;

    cout<<"Enter no. of rows:";
    cin>>r;

    for (int i = r; i > 0; i--)
    {
        for(int j=0;j<i-1;j++)
        {
            cout<<" ";
        }

        for(int k=r;k>=i*2-r;k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for (int i = r-1; i > 0; i--)
    {
        for(int j=r-1;j>=i;j--)
        {
            cout<<" ";
        }

        for(int k=0;k<i*2-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    return 0;
}
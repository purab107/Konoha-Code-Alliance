#include<iostream>
using namespace std;

int main()
{
    int r;

    cout<<"Enter no. of rows:";
    cin>>r;

    for (int i=1;i<=r;i++)
    {
        for (int j=0;j<=r-i-1;j++)
        {
            cout<<" ";
        }

        for (int k=1;k<=i*2-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;   
    }
    

    return 0;
}
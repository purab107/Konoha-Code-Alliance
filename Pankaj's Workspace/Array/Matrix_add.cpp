#include<iostream>
using namespace std;

int main()
{
    int a[10][10];
    int b[10][10];

    int n,r,c;

    cout<<"Enter no. of rows:";
    cin>>r;
    cout<<"Enter no. of columns:";
    cin>>c;
    
    cout<<"1st Matrix:"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"2nd Matrix:"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>b[i][j];
        }
    }

    cout<<"1st Matrix elements:"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"2nd Matrix elements:"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Sum of 1st and 2nd Matrix:"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]+b[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
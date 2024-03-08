#include<iostream>
using namespace std;

int main()
{
    int c;
    cout<<"Enter no. of columns:";
    cin>>c;

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;    
    }

    for(int i=0;i<c-1;i++)
    {
        for (int k = c-1; k>i; k--)
        {
            cout<<"*";
        }
        cout<<endl;    
    }

    return 0;
}
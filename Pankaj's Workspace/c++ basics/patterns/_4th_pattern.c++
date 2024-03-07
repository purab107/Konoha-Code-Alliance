#include<iostream>
using namespace std;

int main()
{
    int r,c;

    cout<<"Enter no. of rows:";
    cin>>r;

    for (int i=r;i>0;i--)
    {
        for (int j=0;j<r;j++)
        {
            if(j<i-1)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;   
    }
    

    return 0;
}
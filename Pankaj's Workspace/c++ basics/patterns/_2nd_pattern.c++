#include<iostream>
using namespace std;

int main()
{
    int r;

    cout<<"Enter no. of rows:";
    cin>>r;

    for (int i=r;i>0;i--)
    {
        for (int j=i;j>0;j--)
        {
                cout<<"*";
        }
        cout<<endl;   
    }
    

    return 0;
}
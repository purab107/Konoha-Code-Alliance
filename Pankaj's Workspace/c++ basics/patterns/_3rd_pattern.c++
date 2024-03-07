#include<iostream>
using namespace std;

int main()
{
    int r,c;

    cout<<"Enter no. of rows:";
    cin>>r;

    for (int i=0;i<r;i++)
    {
        for (int j=r;j>0;j--)
        {
            if(j>r-i)
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }       
        }
        cout<<endl;   
    }
    

    return 0;
}
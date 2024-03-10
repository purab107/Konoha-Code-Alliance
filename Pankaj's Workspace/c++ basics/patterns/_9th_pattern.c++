#include<iostream>
using namespace std;

int main()
{
    int r;

    cout<<"Enter no. of rows:";
    cin>>r;

    for(int i=r;i>0;i--)
    {
        for(int j=0;j<r;j++)
        {
            if((i<r&&i>1)&&(j>0&&j<r-1))
            {
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}
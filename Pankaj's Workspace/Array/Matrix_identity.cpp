#include<iostream>
using namespace std;

int main()
{
    int arr[20][20];
    int r;

    cout<<"Enter number of rows:";
    cin>>r;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(i==j)
            {
                arr[i][j]=1;
            }
            else
            {
                arr[i][j]=0;
            }
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
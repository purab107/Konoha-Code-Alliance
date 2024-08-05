#include<iostream>
using namespace std;

int main()
{
    int arr[20][20];
    int r,c;

    cout<<"Enter number of rows and columns:";
    cin>>r>>c;

    cout<<"Enter elements of Matrix:"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Matrix:"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Transpose of Matrix:"<<endl;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
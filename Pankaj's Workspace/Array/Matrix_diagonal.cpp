#include<iostream>
using namespace std;

int main()
{
    int arr[20][20];
    int r;

    cout<<"Enter number of rows:";
    cin>>r;

    cout<<"Enter "<<r<<" elements:"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(i==j)
            {
                cin>>arr[i][j];
            }
            else{
                arr[i][j]=0;
            }
        }
    }

    cout<<"Diagonal matrix:"<<endl;
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
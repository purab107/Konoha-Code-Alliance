#include<iostream>
using namespace std;

int main()
{
    int arr[20][20];
    int r;
    int s;

    cout<<"Enter number of rows:";
    cin>>r;

    cout<<"Enter element:";
    cin>>s;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(i==j)
            {
                arr[i][j]=s;
            }
            else{
                arr[i][j]=0;
            }
        }
    }

    cout<<"Scalar matrix:"<<endl;
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
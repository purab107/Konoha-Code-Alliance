#include<iostream>
using namespace std;

int main()
{
    int arr[20][20];
    int r;

    cout<<"Enter number of rowws:";
    cin>>r;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Matrix:"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Determinant of Matrix:"<<endl;
    cout<<(arr[0][0]*arr[1][1])-(arr[1][0]*arr[0][1]);

    return 0;
}
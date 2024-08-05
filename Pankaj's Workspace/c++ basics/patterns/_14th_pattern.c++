#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter number of rows:";
    cin>>r;

    for(int i=0;i<r;i++)
    {
        for(char j='A';j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}
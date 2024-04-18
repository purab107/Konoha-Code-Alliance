#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;

    int temp=n-1;

    if(n==0)
    {
        cout<<1;
    }
    else
    {
        while(temp!=0)
        {
            n=n*temp;
            temp--;
        }

        cout<<n;
    }

    return 0;
}
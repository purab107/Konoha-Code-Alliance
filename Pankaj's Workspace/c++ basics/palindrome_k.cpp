#include<iostream>
using namespace std;

int main()
{
    int n,t;
    int ans=0;
    
    cout<<"Enter number:";
    cin>>n;

    int temp=n;

    while(n!=0)
    {
        t=n%10;
        ans=ans*10+t;
        n=n/10;
    }

    if(ans==temp)
    {
        cout<<ans<<" is a palindrome"<<endl;
    }
    else
    {
        cout<<ans<<" is not a palindrome"<<endl;
    }

    return 0;

}
#include<iostream>
using namespace std;

int main()
{
    int n,ch;
    cout<<"Enter limit:";
    cin>>n;

    cout<<"Enter choice"<<endl<<"1.Odd number series"<<endl<<"2.Even number series"<<endl<<"3.Prime number series"<<endl<<"4.Natural number series"<<endl;
    cin>>ch;

    switch (ch)
    {
    case 1:
            for(int i=0;i<=n;i++)
            {
                if(i%2!=0)
                {
                    cout<<i<<" ";
                }
            }
        break;

    case 2:
            for(int i=0;i<=n;i++)
            {
                if(i%2==0)
                {
                    cout<<i<<" ";
                }
            }
        break;

    case 3:
            for(int i=1;i<=n;i++)
            {
                int count=0;
                for(int j=1;j<=n;j++)
                {
                    if(i%j==0)
                    {
                        count++;
                    }
                }

                if(count==2)
                {
                    cout<<i<<" ";
                }
            }
            break;
    
    case 4:
            for(int i=1;i<=n;i++)
            {
                cout<<i<<" ";
            }
            break;

    default:
        cout<<"wrong choice";
        break;
    }

    return 0;
}
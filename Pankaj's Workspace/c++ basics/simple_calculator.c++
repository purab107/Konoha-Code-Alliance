#include<iostream>
using namespace std;

int main()
{
    int a,b,choice;
    float c,d;
    int sum,sub,mul,div;

    c=a;
    d=b;

    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;

    cout<<"Enter your desires:"<<endl;
    cout<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl;
    cin>>choice;

    switch (choice)
    {
    case 1:
        sum=a+b;
        cout<<sum<<endl;
        break;
    
    case 2:
        sub=a-b;
        cout<<sub<<endl;
        break;

    case 3:
        mul=a*b;
        cout<<mul<<endl;
        break;

    case 4:
        div=c/d;
        cout<<div<<endl;
        break;

    default:
        cout<<"you deserve hell"<<endl;
        break;
    }

    return 0;
}
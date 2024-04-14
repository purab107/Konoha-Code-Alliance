#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[100];
    int n;
    cout<<"Enter string:";
    gets(str);

    n=strlen(str);
    
    cout<<n<<endl;

    for(int i=n;i>=0;i--)
    {
        cout<<str[i];
    }

    return 0;
    
}
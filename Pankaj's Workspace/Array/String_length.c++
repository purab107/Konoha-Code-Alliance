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
    puts(str);
    cout<<"length of string is "<<n<<endl;

    return 0;
    
}
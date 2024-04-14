#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[25];
    int vcount=0,ccount=0,scount=0;
    cout<<"Enter string:";
    gets(str);

    int n=strlen(str);

    for (int i = 0; i < n; i++)
    {
        if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
        {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            {
                vcount++;
            }
            else
            {
                ccount++;
            }
        }
    }

    cout<<"Number of vowels in string are "<<vcount<<endl;
    cout<<"Number of consonants in string are "<<ccount<<endl;

    return 0;
}
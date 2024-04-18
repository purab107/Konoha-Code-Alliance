//WAP to largest among 3 no.'s 
//Using if stmt
//C
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the no.:\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b&&a>c)
    {
        printf("%d is greater",a);
    }
    if(b>a&&b>c)
    {
        printf("%d is greater",b);
    }
    if(c>a&&c>b)
    {
        printf("%d is greater",c);
    }
    return 0;
}

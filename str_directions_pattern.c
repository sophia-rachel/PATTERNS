//program to print the given string in any direction given the degree
//input
//apple
//315
//output
//****e
//***l
//**p
//*p
//a

#include <stdio.h>

int main()
{
    int x,n,i,j,b;
    char a[100];
    scanf("%s",a);
    scanf("%d",&x);
    n=strlen(a);
    if(x==0 ||x==360)
    printf("%s",a);
    if(x==45)
    {
     for(i=0;i<n;i++)
     {
         for(j=0;j<i;j++)
         printf("*");
         printf("%c\n",a[i]);
     }
    }
    if(x==90)
    {
        for(i=0;i<n;i++)
        printf("%c\n",a[i]);
    }
    if(x==135)
    {
        b=n-1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<b;j++)
            printf("*");
            b--;
            printf("%c\n",a[i]);
        }
    }
    if(x==180)
    for(i=n-1;i>=0;i--)
    printf("%c",a[i]);
    if(x==225)
    {
        b=0;
        for(i=n-1;i>=0;i--)
        {
            for(j=0;j<b;j++)
            printf("*");
            b++;
            printf("%c\n",a[i]);
        }
    }
    if(x==270)
    for(i=n-1;i>=0;i--)
    printf("%c\n",a[i]);
    if(x==315)
    {
        b=n-1;
        for(i=n-1;i>=0;i--)
        {
            for(j=0;j<b;j++)
            printf("*");
            b--;
            printf("%c\n",a[i]);
        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int r,sum=0,n,t;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(t==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
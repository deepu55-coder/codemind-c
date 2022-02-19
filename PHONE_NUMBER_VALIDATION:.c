#include<stdio.h>
int main()
{
    long int t,n,s,r;
    scanf("%ld",&n);
    s=0;
    t=n;
    while(n>0)
    {
        r=n%10;
        s=s+1;
        n=n/10;
    }
    if(s==10)
{
    if(t/1000000000==0)
    {
        printf("Invalid");
    }
else
{
    printf("Valid");
}
}
else
{
    printf("Invalid");
}
}




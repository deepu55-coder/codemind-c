#include<stdio.h>
int main()
{
    long long int n,i;
    scanf("%lld",&n);
    if(n>=0)
    {
        i=n/10;
    }
    if(n<0)
    {
        if(n%10!=0)
        i=(n/10)-1;
        else
        i=n/10;
    }
   printf("%lld",i); 
}
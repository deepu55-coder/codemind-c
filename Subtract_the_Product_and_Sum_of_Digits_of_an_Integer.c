#include<stdio.h>
int main()
{
    int n,r,sum=0,p=1,result;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        p=p*r;
        n=n/10;
    }
    result=p-sum;
    printf("%d",result);
    return 0;
}
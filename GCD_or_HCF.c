
#include<stdio.h>
int main()
{
    int a,b,n,i;
    scanf("%d%d",&a,&b);
    for(i=a;i>0;i--)
    {
        if(a%i==0&&b%i==0)
{
    printf("%d",i);
    break;
      }
    }
   }

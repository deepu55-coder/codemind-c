#include<stdio.h>
#include<math.h>
int main()
{
    int n,count=0,r,k,temp,i;
    scanf("%d",&n);
    for(k=2;k<sqrt(n);k++)
    {
        if(n%k==0)
        {
            count=count+1;
            break;
        }
    }
    if(count!=0)
    {
        printf("Not Mega Prime");
    }
    else
    {
        temp=n;
        while(temp>0)
        {
            r=temp%10;
            if(r==2||r==3||r==5||r==7)
            r=r;
            else
            {
                printf("Not Mega Prime");
                i=1;
                break;
            }
            temp=temp/10;
        }
        if(i!=1)
        {
            printf("Mega Prime");
        }
    }
}
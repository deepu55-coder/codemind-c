#include<stdio.h>
int main()
{
    int n,rev=0;
    scanf("%d",&n);
    int r,i,a[n],b;
    for(i=0;i<n;i++)
    {
        rev=0;
        scanf("%d",&a[i]);
        b=a[i];
        while(a[i]>0)
        {
            r=a[i]%10;
            rev=(rev*10)+r;
            a[i]=a[i]/10;
        }
        if(b==rev)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    return 0;
}


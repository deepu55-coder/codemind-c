#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,max;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    max=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]+k>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}

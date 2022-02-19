#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year%400==0)
    printf("True",year);
    else if(year%100==0)
    printf("False",year);
    else if(year%4==0)
    printf("True",year);
    else
    printf("False",year);
    return 0;
}
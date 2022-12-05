#include<stdio.h>
void main()
{
    int a[10],n,i,sum=0,SUM,missnum;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    n++;
    SUM=n*(n+1)/2;
    missnum=SUM-sum;
    printf("the missing number is %d",missnum);

}
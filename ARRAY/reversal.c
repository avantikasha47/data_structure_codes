#include<stdio.h>
void main()
{
    int a[10],n,i,temp;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
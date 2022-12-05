#include<stdio.h>
void main()
{
    int a[10],i,n;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

}

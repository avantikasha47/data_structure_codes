#include<stdio.h>
void main()
{
    int a[10],i,n,pos;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    printf("\n");
    printf("enter the inserting position:");
    scanf("%d",&pos);
    if(pos<=0||pos>n)
    {
        printf("enter valid position:");
    }
    else
    {

    for(i=pos-1;i<=n-1;i++)
    {
        a[i]=a[i+1];
    }
    }
    n--;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}





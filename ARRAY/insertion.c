#include<stdio.h>
void main()
{
    int a[10],i,n,pos,x,temp;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the inserting position:");
    scanf("%d",&pos);
    printf("enter the insert element:");
    scanf("%d",&x);
    for(i=n;i>=pos;i--)
    {
      a[i]=a[i-1];
    }
    a[pos-1]=x;
    for(i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }



}

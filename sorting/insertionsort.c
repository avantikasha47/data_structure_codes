#include<stdio.h>
void main()
{
     int a[10],n,i,j,temp=0,min;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0&&a[j]>temp)
        {
          a[j+1]=a[j];
          j--;

        }
        a[j+1]=temp;
    }
    printf("sorted array as:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
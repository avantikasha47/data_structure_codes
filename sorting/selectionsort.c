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
     for(i=0;i<n-1;i++)
     { min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            
            }
        }
        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
     }
     printf("sorted array as:");
     for(i=0;i<n;i++)

     {
        printf("%d ",a[i]);
     }
}
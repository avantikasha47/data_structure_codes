#include<stdio.h>
void main()
{
    int i,n,x;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be insert:");
    scanf("%d",&x);
    
    i=n-1;
    while(x<a[i]&&i>=0)
     {
        
           a[i+1]=a[i];
           i--;
    }
        a[i+1]=x;
        n++;
        for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
        }
        
    }

    


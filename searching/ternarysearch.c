#include<stdio.h>
void main()
{
    int a[10],n,x,i,l,r,mid1,mid2,flag=0,index;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number to be found:");
    scanf("%d",&x);
    l=a[0];
    r=a[n-1];
    while(l<=r)
    {
    mid1=l+(r-l)/3;
    mid2=r-(r-l)/3;
    if(x==a[mid1]||x==a[mid2])
    {
        printf("number found");
        flag++;
        break;
    }

    else
    {
        if(x<a[mid1])
        {
            r=mid1-1;
        }
        else if(x>a[mid2])
        {
            l=mid2+1;
        }
        else
        {
        l=mid1+1;
        r=mid2-1;
        }
    }
    }
    if(flag==0)
    {
        printf("number not found in array");
    }
}


#include<stdio.h>
int main()
{
    int a[10],n,x,l,r,mid,i,flag=0,index;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number to be found:");
    scanf("%d",&x);
     l=0;
     r=n-1;
     
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]==x)
        {
            index=mid;
            printf("number %d found at %d index",x,index);
            flag++;
            break;
        }
        else if(x<a[mid])
        {
          r=mid-1;
        }
        else
        {
          l=mid+1;
        }


    }
    if(flag==0)
    printf("number not found");
    return 0;
}

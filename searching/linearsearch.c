#include<stdio.h>
void main()
{
    int a[10],n,x,flag=0,i,index;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number to be found:");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            index=i;
            flag++;
            break;    
        }
    }
    if(flag==0)
    {
        printf("number not found");
    }
    else
    {
        printf("number found");
        printf("number %d found at %d index",x,index);
    }

}
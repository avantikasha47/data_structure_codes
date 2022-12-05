#include<stdio.h>
void main()
{
    int m,n,a[10],b[10],i,j,k,flag,c[10];
    printf("enter size of Ist array:");
    scanf("%d",&m);
    printf("enter elements of Ist array");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter size of second array:");
    scanf("%d",&n);
    printf("enter elements of second array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {flag=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                flag=1;
            }
        }
    if(flag==0)
    {
    
      c[k]=a[i];
      k++;
    }
    }
    printf("difference of 2 arrays is\n");
    for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
}

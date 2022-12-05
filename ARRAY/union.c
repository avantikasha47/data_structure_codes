#include<stdio.h>
void main()
{
    int m,n,a[10],b[10],i,c[20],k=0,j;
    printf("enter size of Ist array:");
    scanf("%d",&m);
    printf("enter elements of Ist array:");
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
    {
        c[k]=a[i];
        k++;
    }
    for(i=0;i<m;i++)
    {int f=0;
    for(j=0;j<n;j++)
    {
        if(b[i]==c[j])
        {
            f=1;
        }
    }
        if(f==0)
        {
            c[k]=b[i];
            k++;
        }
    }
    
printf("union as:");
for(i=0;i<k;i++)
{
    printf("%d",c[i]);
}


}
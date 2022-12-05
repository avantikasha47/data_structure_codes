#include<stdio.h>
void main()
{
    int a[10],b[10],c[20],m,n,i,j,k;
    printf("size of first array:");
    scanf("%d",&m);
    printf("size of second array");
    scanf("%d",&n);
    printf("enter elements of first array:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i<m;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    printf("elements of second array:\n");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    printf("\n");
    for(j=0;j<n;j++)
    {
        printf("%d",b[j]);
    }
    printf("\n");
    i=0;
    j=0;
    while(i<m&&j<n)
    {
      if(a[i]<b[j])
      {
        c[k]=a[i];
        i=i+1;
        k=k+1;
      }
      else
      {
            c[k]=b[j];
            j=j+1;
            k=k+1;
      }

    }
    while(i<m)
    {
        c[k]=a[i];
        i=i+1;
        k=k+1;
    }
    while(j<n)
    {
        c[k]=b[j];
        j=j+1;
        k=k+1;
    }
    for(i=0;i<k;i++)
    {
        printf("%d",c[i]);

    }
}


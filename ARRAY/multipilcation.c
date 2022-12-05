#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[20][20],m,n,i,j,p,q,k;
    printf(" enter no of rows  and column of first matrix:");
    scanf("%d%d",&m,&n);
    printf("enter no of rows and coloumn of second matrix:");
    scanf("%d%d",&p,&q);
    printf("enter elements of first matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d\t",&a[i][j]);
        }
    
    printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("enter elements of second matrix:");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
        scanf("%d\t",&b[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
        printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    if(n==p)
    {
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    
    }           
    printf("new array after multiplication:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
  
    }
}
}

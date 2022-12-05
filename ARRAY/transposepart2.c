#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],m,n,i,j,temp;
    printf(" enter no of rows  and column of first matrix:");
    scanf("%d%d",&m,&n);
    printf("enter elements:");
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
    for(i=0;i<m;i++)
    {
        for(j=0;j<i;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }

    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

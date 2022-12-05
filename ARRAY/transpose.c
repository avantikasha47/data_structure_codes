#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],m,n,i,j;
    printf(" enter no of rows  and column of first matrix:");
    scanf("%d%d",&m,&n);
    printf("enter elements in marix:");
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
        for(j=0;j<n;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");

    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a[10],n,max,i;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }

    }
    printf(" max value is %d\n",max);
    int c[max+1]={0};
    for(i=0;i<n;i++)
    {
        c[a[i]]++;
    }
    for(i=0;i<=max;i++)
    {
        if(c[i]==1)
        {
                printf("%d is not repeated\n",i);
        }
     if(c[i]>1){
    printf("%d is repeated %d times\n",i,c[i]);
    }
    }


return 0;

}

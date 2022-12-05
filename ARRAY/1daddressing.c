#include <stdio.h>
void main()
{
    int a[]={1,2,3,4};
    int i;
    for(i=0;i<4;i++)
    {
        printf("%d=%d\n",a[i],&a[i]);
    }
    int *c=(int)&a[0]+sizeof(int)*(a[2]-1);
    printf("\n%d",c);
}
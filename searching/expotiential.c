#include <stdio.h>
#include <time.h>
#include <math.h>
#define min
int exponentialSearch(int arr[], int n, int x)
{
	if(arr[0] == x)
		return 0;
	int i = 1;
	while (i<n&&arr[i]<=x)
		i=i*2;
	return binarySearch(arr, i/2,min(i, n-1),x);
}
int binarySearch(int arr[],int l,int r,int x)
{
	if (r>=l)
	{
		int mid = l+(r-l)/2;
		if (arr[mid]==x)
			return mid;
		if (arr[mid]>x)
			return binarySearch(arr,l,mid-1,x);
		return binarySearch(arr,mid+1,r,x);
	}
	return -1;
}
int main()
{
	int n,i,a[10],x;
	 printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number to be found:");
    scanf("%d",&x);
int result = exponentialSearch(a,n,x);
if(result==-1)
{
	printf("element ot found");
}
else
{
	printf("element found at index %d",result);
}
return 0;
}
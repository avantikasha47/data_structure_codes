#include <stdio.h>
int interpolationSearch(int arr[], int lo, int hi, int x)
{
	int pos;
	if (lo<=hi&&x>=arr[lo]&&x<=arr[hi]) 
	{
		pos = lo+(((double)(hi-lo)/(arr[hi]-arr[lo]))*(x-arr[lo]));
		if (arr[pos]==x)
			return pos;
		if (arr[pos]<x)
			return interpolationSearch(arr, pos + 1, hi, x);
		if (arr[pos]>x)
			return interpolationSearch(arr,lo,pos-1,x);
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
	int index = interpolationSearch(a,0,n-1,x);
	if (index !=-1)
		printf("Element found at index %d", index);
	else
		printf("Element not found.");
	return 0;
}
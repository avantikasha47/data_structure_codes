#include<stdio.h>
#include<math.h>
int min(int a, int b){
	if(b>a)
	return a;
	else
	return b;
}
int jumpsearch(int arr[], int x, int n)
{
	int step=sqrt(n);
	int prev=0;
	while(arr[min(step,n)-1]<x)
	{
		prev=step;
		step+=sqrt(n);
		if(prev>=n)
			return -1;
	}
	while (arr[prev]<x)
	{
		prev++;
		if (prev==min(step,n))
			return -1;
	}
	if (arr[prev]==x)
		return prev;

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
	int index=jumpsearch(a, x,n);
	if(index>=0)
	printf("Number is found at %d index",index);
	else
	printf("Number is not exist in the array");
	return 0;
}

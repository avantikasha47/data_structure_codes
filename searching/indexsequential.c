#include <stdio.h>
#include <stdlib.h>

void indexedSequentialSearch(int arr[], int n, int x)
{
	int GN = 3;
	int elements[GN], indices[GN],i,set=0;
	int j=0,ind=0,start,end;
	for (i = 0; i < n; i += 3)
	 {
		elements[ind] = arr[i];
		indices[ind] = i;
		ind++;
	}
	if (x<elements[0]) 
	{
		printf("Not found");
		exit(0);
	}
	else {
		for (i=1;i<=ind;i++)
			if (x<= elements[i]) 
	        {
				start=indices[i-1];
				end=indices[i];
				set=1;
				break;
			}
	}
	if(set==0) 
	{
		start=indices[GN-1];
		end=GN;
	}
	for(i=start;i<=end;i++) 
	{
		if (x==arr[i]) 
		{
			j=1;
			break;
		}
	}
	if(j==1)
		printf("Found at index %d",i);
	else
		printf("Not found");
}
void main()
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
	indexedSequentialSearch(a, n,x);
}
#include <stdio.h> 

void swap(int *a, int *b) 
{ 
    *a=*a + *b; 
    *b=*a - *b; 
    *a=*a - *b; 
    return ; 

} 
void shellsort(int arr[],int nums) 
{ 
    for (int i = nums/2;i>0;i=i/2) 
    { 
        for (int j=i; j<nums;j++) 
        { 
            for(int k=j-i;k>= 0;k=k-i) 
            {
                if(arr[k+i]>=arr[k]) 
                { 
                    break; 
                }
                else 
                { 
                    swap(&arr[k],&arr[k+i]); 
                }
            } 
        } 
    } 
    return ; 
} 
int main() 
{
    int nums; 
    printf("Enter the size of array:"); 
    scanf("%d",&nums); 
    int arr[nums]; 
    printf("Enter the elements: \n"); 
    for (int k=0;k<nums;k++) 
    { 
         scanf("%d",&arr[k]); 
    } 
    shellsort(arr,nums); 
    printf("Sorted array is:\n"); 
    for (int k=0;k<nums;k++) 
    { 
        printf("%d ",arr[k]); 
    }	 
    return 0; 
} 
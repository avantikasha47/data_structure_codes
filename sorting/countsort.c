
#include <stdio.h> 
int main() 
{
  int a[20],i,n;
  printf("enter the size of array:\n");
  scanf("%d",&n);
  printf("enter elements:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  countingSort(a,n); 
  printArray(a,n); 
  return 0; 
} 
 void countingSort(int a[],int size)
  { 
  int output[10]; 
  int max=a[0]; 
  for (int i=1;i<size;i++)
   { 
    if(a[i]>max) 
      max=a[i]; 
  } 
  int count[10]; 
  for (int i=0;i<=max;++i)
   { 
    count[i]=0; 
  } 
  for (int i=0;i<size;i++) { 
    count[a[i]]++; 
  } 
  for (int i=1;i<=max;i++)
   { 
    count[i]+=count[i-1]; 
  } 
  for (int i=size-1;i>=0;i--) 
  { 
    output[count[a[i]]-1]=a[i]; 
    count[a[i]]--; 
  } 
  for (int i=0;i<size;i++)
   { 
    a[i]=output[i]; 
  } 
} 
void printArray(int a[], int size) 
{ 
  for (int i=0;i<size;++i)
   { 
    printf("%d  ",a[i]); 
  } 
  printf("\n"); 
} 
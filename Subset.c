#include<stdio.h>

int main()
{
  int arr[50];
  int i,j,n,temp,set,sum=0;
  
  printf("Enter the size of array :"); 
  scanf("%d",&n);
  
  printf("enter the elements of array :\n");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
  for(i=0;i<n;i++)
  {
    if(arr[i]>arr[i+1])
    {
      temp=arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp;
      i=-1;
    }
  }
  
  printf("Sorted Array is:\n");
  for(i=0;i<n;i++)
    printf("%d",arr[i]);
    
  printf("\n\nEnter a number to find its subsets for the sum:");
  scanf("%d",&set);
  
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      sum=arr[i]+arr[j];
      if(sum == set)
        printf("%d + %d = %d\n",arr[i],arr[j],sum);
    }
  }

}

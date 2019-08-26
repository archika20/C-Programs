#include<stdio.h>

int main()
{
  int arr[50];
  int start,end,i,sum=0,n;
  
  printf("Enter the size of array :"); 
  scanf("%d",&n);
  
  printf("enter the elements of array :\n");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
  printf("enter your starting and ending index for there addition :\n");
  scanf("%d %d",&start,&end);
  
  for(i=start;i<end+1;i++)
  {
    sum=sum+arr[i];
  }
  
  printf("Sum is %d \n",sum);  
}

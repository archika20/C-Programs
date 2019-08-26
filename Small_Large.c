#include<stdio.h>

int main()
{
  int arr[50];
  int small=0,large=0;
  int i,j,n;
  
  printf("Enter the size of array :"); 
  scanf("%d",&n);
  
  printf("enter the elements of array :\n");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
  large=arr[0];
  for(i=0;i<n;i++)
  {
     if(arr[i]>large)
      large=arr[i];
     else
       if(arr[i]<large)
         small=arr[i]; 
  }  
  
  printf("Largest no. is %d \n",large);
  printf("Smallest no. is %d \n",small);
  
 
}

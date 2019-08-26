#include<stdio.h>
int main()
{
  int arr[]={1,2,3,4,5,6,7,8,9,0};
  int search;
  int i,flag=0;
  
  printf("enter a number to search :");
  scanf("%d",&search);
  
  for(i=0;i<10;i++)
  {
    if(arr[i] == search)
      flag=1;      
  }
 
  if(flag == 1)
    printf("Your nubmer found in the given array \n");
  else
    printf("Sorrry !!! TRY AGAIN \n");
   
  printf("Given array was : \n"); 
  for(i=0;i<10;i++)
  {
    printf("%d ",arr[i]);      
  }    
} 

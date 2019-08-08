//to count operators in a given file
#include<stdio.h>

void main()
{
	FILE *fp;
	char arr[]={'+','-','=','*','!','<','>','&','|','~'};
	char str;
	int i=0,count=0;
	
	fp= fopen("abcd.txt","r");
	
	if(fp == '\0')
	{
		printf("No file found");
		exit(0);
	}
	
	str=fgetc(fp);
	while(str != EOF)
	{
		for(i=0;i<sizeof(arr);i++)
		{
		  if(arr[i] == str)
		  {
			if(str == ' ')
			{
				count++;
			}
			else
			{
				count++;
			    str=fgetc(fp);
			}
		  }	
		} 
		str=fgetc(fp);
	}
	
	
	printf("Number of operators are: %d\n",count);
}

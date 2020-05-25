//Program to search single value in array
#include<stdio.h>

void main()
{
	int a[100],n,i,s,flag=0;
	printf("\nEnter size of array:");
	scanf("%d",&n);
	printf("\nEnter elements of array: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nEntered array is:\n ");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
	printf("\nEnter the value you want to search for: ");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			printf("\nValue present at index %d and address %p",i+1,&a[i]);
			flag =1;
			break;
			
		}
	}
	if(flag!=1)
		printf("\nThe value does not exist!");
	printf("\n");
	
}
		

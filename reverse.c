//accpt n integers, and display them in reverse order

#include<stdio.h>

void main()
{
	int a[20],n,i;
	printf("\nEnter size of array: ");
	scanf("%d",&n);
	printf("\nEnter the array:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nThe array entered is:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
	printf("\nThe array in reverse is:\n");
	for(i=n-1;i>=0;i--)
		printf("%d\t",a[i]);
	printf("\n");
}

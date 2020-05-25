//sum ang avg of array elements

#include<stdio.h>

void main()
{
	int a[20],n,i,sum=0;
	float avg=0;
	printf("\nEnter size of array: ");
	scanf("%d",&n);
	printf("\nEnter the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum += a[i];
	}
	avg = (float) sum/n;
	printf("\nThe array entered is:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\nSum = %d\nAvg = %f",sum,avg);
	printf("\n");
}
	

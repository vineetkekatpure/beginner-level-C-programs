/*initial	10,20,30,40,50
final	20,30,40,50,10*/

#include<stdio.h>

void main()
{
	int a[20],n,i,temp;
	printf("\nEnter size of array: ");
	scanf("%d",&n);
	printf("\nEnter the array:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nThe array entered is:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
	temp = a[0];
	for(i=0;i<n;i++)
		a[i]=a[i+1];
	a[n-1] = temp;
	printf("\nThe array shifted left by one is:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}	

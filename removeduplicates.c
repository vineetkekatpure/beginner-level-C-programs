//Remove duplicates
#include<stdio.h>

void main()
{
	int a[20],n,i,j,k;
	printf("\nEnter size of array: ");
	scanf("%d",&n);
	printf("\nEnter the array:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nThe array entered is:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[i]==a[j])
			{
				for(k=j;k<n-1;k++)
				a[k]=a[k+1];
				n--;
				i--;
			}
	printf("\nThe array after removing duplicates is:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}


//functions to read,display and reverse an array

#include<stdio.h>

 void read(int x[], int n)
{
	int i;
	printf("\nEnter %d elements: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
}

 void display(int x[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d\t",x[i]);
	printf("\n");
}

 void reverse(int x[], int n)
{
	int i,temp;
	for(i=0;i<n/2;i++)
	{
		temp = x[i];
		x[i] = x[n-i-1];
		x[n-i-1] = temp;
	}
	printf("\nThe reversed array = ");
	display(x,n);
}

 void main()
{
	int a[100],n;
	printf("\nEnter size of array ");
	scanf("%d",&n);
	read(a,n);
	printf("\nThe original array = ");
	display(a,n);
	reverse(a,n);
}	

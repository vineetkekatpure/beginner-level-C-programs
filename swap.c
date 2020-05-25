//swap two integers usung pointers

#include<stdio.h>

 void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

 void main()
{
	int a,b;
	printf("\nEnter 2 integers: ");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("\nAfter swap: %d and %d\n",a,b);
}


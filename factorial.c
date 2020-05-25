//actorial using functions

#include<stdio.h>

 long fact(int k)
{
	long f=1;
	int i;
	for(i=1;i<=k;i++)
		f *= i;
	return f;
}

 void main()
{
	int n;
	long f;
	printf("\nEnter an integer: ");
	scanf("%d",&n);
	f = fact(n);
	printf("\n %d! = %f",n,f);
	printf("\n");
}

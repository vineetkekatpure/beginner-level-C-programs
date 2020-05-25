//recursive fibonacci and first n fibonacci numbers

#include<stdio.h>

 int fibo(int k)
{
	if(k == 1 || k == 2)
		return 1;
	else
		return(fibo(k-1) + fibo(k-2));
}

 void main()
{
	int i,n;
	printf("\nEnter how many numbers you want:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		printf("%d\t",fibo(i));
	printf("\n");
}	

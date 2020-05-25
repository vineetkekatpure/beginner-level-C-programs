//check for prime and print first n primes
#include<stdio.h>

 int isprime(int k)
{
	int i;
	if(k==1)
		return 0;
	for(i=2;i<k;i++)
	{
		if(k%i==0)
			return 0;
	}
	return 1;
}

 void main()
{
	int i=1,n,k,count=0;
	printf("\nEnter number of primes needed: ");
	scanf("%d",&n);
	while(count<n)
	{
		if(isprime(i))
		{
			printf("%d\t",i);
			count++;
		}
		i++;
	}		
	printf("\n");
}

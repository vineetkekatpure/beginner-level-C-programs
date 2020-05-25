//check for prime and print primes till n

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
	int i,n;
	printf("\nEnter range: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		if(isprime(i))
			printf("%d\t",i);
	printf("\n");
}

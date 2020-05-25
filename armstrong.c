//chech armstrong and display armstrong numbers til n

#include<stdio.h>

 int isarm(int k)
{
	int u,s=0,bk=k;
	while(k != 0)
	{
		u = k % 10;
		s += u*u*u;
		k /= 10;
	}
	if(bk == s)
		return 1;
	else return 0;
}

 void main()
{
	int i,n;
	printf("\nEnter the range: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		if(isarm(i))
			printf("%d\t",i);
	printf("\n");
}

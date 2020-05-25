//incremnt a number by 1 and decrement another by 1
 
#include<stdio.h>

 void change(int *x, int *y)
{
	(*x)++;
	(*y)--;
}
 
 void main()
{
 int a,b;
 printf("\nInput: ");
 scanf("%d%d",&a,&b);
 change(&a,&b);
 printf("\nNow: %d & %d\n",a,b);
}

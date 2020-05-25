//sturcture complex numbers stores real and complex part. functions to add, subtract, multiply

#include<stdio.h>

struct complex
{
	float r,i;
}complex;

 void display(struct complex t)
{
	printf("%.2f + %.2fi\n",t.r,t.i);
}

 struct complex add(struct complex s, struct complex t)
{
	struct complex z;
	z.r = s.r + t.r;
	z.i = s.i + t.i;
	return z;
}

 struct complex subt(struct complex s, struct complex t)
{
	struct complex z;
	z.r = s.r - t.r;
	z.i = s.i - t.i;
	return z;
}

 struct complex mult(struct complex s, struct complex t)
{
	struct complex z;
	z.r = s.r*t.r - s.i*t.i;
	z.i = s.r*t.i + t.r*s.i;
	return z;
}

 void main()
{
	struct complex a,b,c;
	printf("\nEnter first complex number: ");
	scanf("%f%f",&a.r,&a.i);
	printf("\nFirst = ");
	display(a);
	printf("\nEnter second complex number: ");
	scanf("%f%f",&b.r,&b.i);
	printf("\nSecond = ");
	display(b);
	c = add(a,b);
	printf("\n Addition = ");
	display(c);
	c = subt(a,b);
	printf("\n Subtraction = ");
	display(c);
	c = mult(a,b);
	printf("\n Multiplication = ");
	display(c);
	printf("\n");
}
	
	

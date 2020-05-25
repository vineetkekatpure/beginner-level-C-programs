//use structures to store x&y co-ordinates and find distnce between them. and check if 3 points are co-linear

#include<stdio.h>
#include<math.h>

 struct point
{
	float x,y;
}point;

 double distance(struct point p, struct point q)
{
	return (sqrt(pow((p.x-q.x),2) + pow((p.y - q.y),2)));
}

 void main()
{
	struct point a,b,c;
	double d1,d2,d3;
	printf("\nEnter co-ordinates of first point: ");
	scanf("%f%f",&a.x,&a.y);
	printf("\nEnter co-ordinates of second point: ");
	scanf("%f%f",&b.x,&b.y);
	printf("\nEnter co-ordinates of third point: ");
	scanf("%f%f",&c.x,&c.y);
	d1 = distance(a,b);
	d2 = distance(b,c);
	d3 = distance(c,a);
	printf("\nThe distance between (%f,%f) and (%f,%f) is %f",a.x,a.y,b.x,b.y,d1);
	printf("\nThe distance between (%f,%f) and (%f,%f) is %f",b.x,b.y,c.x,c.y,d2);
	printf("\nThe distance between (%f,%f) and (%f,%f) is %f",c.x,c.y,a.x,a.y,d3);
	if(d1+d2==d3 || d2+d3==d1 || d3+d1 == d2)
		printf("\nThe points are colinear.");
	else
		printf("\nThe points are not colinear");
	printf("\n");
}

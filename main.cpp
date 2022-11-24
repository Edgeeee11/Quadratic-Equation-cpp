#include <stdio.h>
#include <math.h>

main() 
{
	float a, b, c;
	
	printf("a=");
	scanf("%f",&a);
	
	printf("b=");
	scanf("%f",&b);
	
	printf("c=");
	scanf("%f",&c);
	
	if(a!=0)
	{
		float d=b*b-4*a*c;
	
	if(d>0)
	{
		float X1=(-b-sqrt(d))/(2*a);
		float X2=(-b+sqrt(d))/(2*a);
		printf("X1=%f X2=%f",X1,X2);
	}
	else
	{
		if(d==0)
		{
			int X=(-b)/(2*a);
			printf("X=%f",X);
		}
		else
		{
			printf("D<0");
		}
	}
}
	else
	{
	float X=-c/b;	
	printf("X=%f",X);
	}
	
	
}

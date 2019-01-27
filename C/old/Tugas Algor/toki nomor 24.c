#include<stdio.h>
int main()
{
	double a,b,c,d,e;
	scanf("%lf %lf %lf %lf", &a,&b,&c,&d);
	e= a*c + b/5 + d;
	printf("%.2lf\n", e);
	return 0;
}


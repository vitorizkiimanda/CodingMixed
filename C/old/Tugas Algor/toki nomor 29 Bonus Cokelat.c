#include<stdio.h>
int main()
{
	int a,b,bonus;
	scanf("%d", &a);
	b=0;
	bonus=a;
	while(a>0)
	{
		a+=b;
		b=a%5;
		a=a/5;
		bonus=bonus+a;
	}
	printf("%d\n", bonus);
	return 0;
}

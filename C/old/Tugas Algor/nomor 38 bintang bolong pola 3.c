#include<stdio.h>
int main()
{
	int a,b,x,y,n;
	scanf("%d", &n);
	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= n; b++)
		{
		x=a+b;
		y=n+1;
		if((b==a)||(x==y)) printf("*");
		else printf(" ");
		}
		
		
		printf("\n");
    }

	
	return 0;
}

#include<stdio.h>
int main()
{
	int a,b,i;
	scanf("%d", &a);
	for(i=a;i>=1;i--)
	{
		for(b=1;b<=a;b++)
		{
		if(b==1)
				printf("*");
		else if((b==1)&&(b==a))
			printf("*");
		else printf(" ");
		}
		printf("\n");
	}
	return 0;
}

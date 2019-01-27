#include<stdio.h>
int main()
{
	int j,i,n;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
		printf("*");
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int a,i,j;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		for(j=1;j<=10;j++)
		{
		printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}

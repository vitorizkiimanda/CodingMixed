
#include<stdio.h>
int main()
{
	int a,b;
	long long int c;
	scanf("%d", &a);
	if((a<=100)&&(a>=1))
	{
		for(b=1;b<=a;b++)
		{
		scanf("%lld", &c);
		if((c%3)==0)
		{
			printf("HABIS DIBAGI\n");
			
		}
		else printf("TIDAK HABIS DIBAGI\n");
		}
	}
	return 0;
}

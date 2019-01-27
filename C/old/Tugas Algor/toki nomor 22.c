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
		if(c>=1000)
		{
			printf("LEBIH BESAR ATAU SAMA DENGAN\n");
			
		}
		else printf("LEBIH KECIL\n");
		}
	}
	return 0;
}

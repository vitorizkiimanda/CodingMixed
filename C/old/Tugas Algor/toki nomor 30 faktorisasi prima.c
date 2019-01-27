#include<stdio.h>
int main()
{
	int a,d,e;
	scanf("%d", &a);
	d=2;
	e=0;
	while(a>1)
	{
		
			while((a%d)==0)
			if((a%d)==0)
			{
				{
					e++;
					a=a/d;
				}
					printf("%d",d);
					printf("^");
					printf("%d\n",e);
			}
			d++;
	}
	return 0;
}

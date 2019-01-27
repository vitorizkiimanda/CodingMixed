#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	scanf("%d", &a);
	if(a>=5)
	{
		b=a/5;
		c=a%5;
		if(c>=5)
		{
			while(g>=5)
			{
			d=b/5;
			e=d%5;
			f=b+c+d+e;
			g=d%5;
			}
			
		}
		else 
		{
			d=b+c;
			e=d/5;
			f=e+b+c+a;
		}
	
	
	printf("%d\n", f);
}
	else printf("%d", a);
	return 0;
}

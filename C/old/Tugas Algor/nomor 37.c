#include<stdio.h>
int main()
{
	int a,b,c,i;
	scanf("%d %d",&a,&b);
	i=0;
	c=0;
	
	while(b!=0)
	{
		c=b%10;
		b=b/10;
		if(c==a) i++;
	}
	printf("%d\n",i);
	
	return 0;
}

#include<stdio.h>
int main()
{
	int tanggal,awal,a=1,b,c=0;
	scanf("%d %d",&tanggal,&awal);
	for(;a;a++)
	{
		if(c>tanggal && b>7)
			return 0;
		for(b=1;b<=7;b++)
			if(c==0)
				if(b==awal)
				{
					c=1;
					printf("..%d",c++);
				}
				else
					printf("...");
			else if(c>tanggal)
				printf("...");
			else if(c<10)
				printf("..%d",c++);
			else 
				printf(".%d",c++);
			
		printf("\n");
	}
	return 0;
}

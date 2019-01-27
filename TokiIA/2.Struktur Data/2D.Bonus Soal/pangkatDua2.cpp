#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	int temp=2, counter=1;
	
	scanf("%d", &x);
	
	if(x==1 or x==2)
	{
		printf("TRUE\n");
		return 0;
	}
	else 
	{
		while(counter++)
		{
			temp=temp*2;
			if(temp==x) 
			{
				printf("TRUE\n");
				return 0;
			}
			else if(counter>=20)
			{
				printf("FALSE\n");
				return 0;
			}
		}
	}
	
}

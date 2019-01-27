#include<bits/stdc++.h>
using namespace std;

int main()
{
	float x;
	int counter;
	
	scanf("%f", &x);
	
	if(x==1 or x==2)
	{
		printf("TRUE\n");
		return 0;
	}
	else
	{
		counter=20;
		while(counter--)
		{
			x=x/2;
			//printf("%f\n", x);
			if(x==2.0)
			{
				printf("TRUE\n");
				return 0;	
			}
		//	if(x<2.0) break;
		}
		printf("FALSE\n");
	}
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	
	scanf("%d", &n);
	
	int x;
	int output=0;
	for(int i=1;i<=n;i++)
	{
		x=1;
		for(int j=1;j<=n;j++)
		{
			if(x<=i)
			{
				printf("%d", output%10);
				++output;	
			}
			if(j==n) printf("\n");
			++x;
		}
	}
	return 0;
}

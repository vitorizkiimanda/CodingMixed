#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	
	scanf("%d", &n);
	
	int x;
	for(int i=1;i<=n;i++)
	{
		x=n;
		for(int j=1;j<=n;j++)
		{
			if(x>i) printf(" ");
			else printf("*");
			if(j==n) printf("\n");
			--x;
		}
	}
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, never;
	
	scanf("%d %d", &n,&never);
	
	for(int i=1;i<=n;i++)
	{
		if(i%never!=0) printf("%d", i);
		else printf ("*");
		if(i==n) printf("\n");
		else printf(" ");
	}
	return 0;
}

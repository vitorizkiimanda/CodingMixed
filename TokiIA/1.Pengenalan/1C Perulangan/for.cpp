#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,x,sum;
	
	scanf("%d", &n);
	
	sum=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d", &x);
		sum+=x;
	}
	
	printf("%d\n", sum);
	return 0;
}

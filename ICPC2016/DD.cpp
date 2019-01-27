#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	int data[100][100];
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d", &n);
		for(int j=0;j<n*3;j++)
			for(int k=0;k<n*3;k++)
				scanf("%d", &data[j][k]);
		
	}
	return 0;
}

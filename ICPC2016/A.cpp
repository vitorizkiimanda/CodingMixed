#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,nilai,counter=0;
	scanf("%d", &t);
	for(int i =1; i<=t;i++)
	{
		scanf("%d", &n);
		for(int j=0;j<n;j++)
		{
			scanf("%d", &nilai);
			if(nilai<60) counter++;
		}
		printf("Case #%d: %d\n", i,counter);
		counter=0;
		
	}
	return 0;
}

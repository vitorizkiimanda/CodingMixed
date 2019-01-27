#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,A=0,B=0,C=0;
	string kata;
	
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		A=0;
		B=0;
		C=0;
		scanf("%d", &n);
		for(int j=0;j<n;j++)
		{
			cin >> kata;
			if(kata.length()==4) A++;
			else if(kata.length()==5) B++;
			else if(kata.length()==6) C++;
		}
		printf("Case #%d: %d %d %d\n", i,A,B,C);
	}
	return 0;
}

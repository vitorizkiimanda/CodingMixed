#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,found;
	string kata1,kata2;
	
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		cin >> kata1 >> kata2;
		printf("Case #%d: ",i);
		
		if((kata1.find(kata2))>=0 )
		{
			printf("YES\n");
		}
		else printf("NO\n");
		
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,m, *pohon;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		pohon=(int*)malloc(m*sizeof(int));
		for(int i=0;i<m;i++)
			scanf("%d", &pohon[i]);
		
		
		free(pohon);
	}
	
	return 0;
}

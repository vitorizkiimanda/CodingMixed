#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n[25001];
	int i=0;
	
	while (cin >>n[i])
	{
		i++;		
	}
	i--;
	for(;i>=0;i--) printf("%d\n", n[i]);
		
	return 0;
}

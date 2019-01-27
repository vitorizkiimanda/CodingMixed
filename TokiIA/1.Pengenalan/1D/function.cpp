#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	long long int hasil=1;
	
	scanf("%d", &n);
	
	if(n<=10 and n>=0)
	{
		for(int i=1;i<=n;i++)
		{
			hasil=hasil*i;
		}
		printf("%d\n", hasil);
	}
	else printf("ditolak\n"); 
	return 0;
}

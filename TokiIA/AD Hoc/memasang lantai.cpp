#include<bits/stdc++.h>
#define SIZE 10000

int main()
{
	long int n, f[SIZE];
	scanf("%ld", &n);
	
	f[0]=1;
	f[1]=1;
	f[2]=1;
	
	for(int i=3;i<=n;i++)
		f[i]=((f[i-1]%1000000)+(f[i-3]%1000000))%1000000;	//rumus umum f[n]=(f[n-1]+f[n-3])
	
	printf("%ld\n", f[n]);
	return 0;
}

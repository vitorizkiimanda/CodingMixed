//sieve of eratosthenos
//mencari bilangan prima sampek n
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	vector<int> v;
	bool f[100000];
	memset(f,true,sizeof(f));//set semua f jadi true,, memset hanya bisa set 1,0,-1
	scanf("%d",&n);
	for(int i=2;i<=sqrt(n);i++) if (f[i])
	{
		for(int j=i*i;j<=n;j+=i)
		{
			f[j]=false;
		}
	}//sieve
	for(int i=2;i<=n;i++) if(f[i])
	{
		v.push_back(i);//memasukan prima ke vector
	}
	for(int i=0;i<v.size();i++)
		printf("%d\n", v[i]);
	return 0;
}

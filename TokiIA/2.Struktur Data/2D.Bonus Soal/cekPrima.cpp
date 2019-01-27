//sieve of eratosthenos
//mencari bilangan prima sampek n
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	vector<int> prima;
	bool f[100000];
	memset(f,true,sizeof(f));//set semua f jadi true,, memset hanya bisa set 1,0,-1
	
	while(cin >> n)
	{
		
		if(n<=1)
		{
			printf("TIDAK\n");
			continue;
		}
		
		
		for(int i=2;i<=sqrt(n);i++) if (f[i])
		{
			for(int j=i*i;j<=n;j+=i)
			{
				f[j]=false;
			}
		}//sieve
		
		for(int i=2;i<=n;i++)
		if(f[i])//if still true
		{
			prima.push_back(i);//memasukan prima ke vector
		}
		
		
		for(int i=0;i<prima.size();i++)
		{
			if(n==prima[i])
			{
				printf("YA\n");
				break;
			}
			else if(i==prima.size()-1)
				printf("TIDAK\n");
		}
		
		prima.clear();
	}
	return 0;
}

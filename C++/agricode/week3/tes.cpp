#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t, n,m,i,j,x;
	long long int jumlah;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld", &m,&n);
		jumlah=0;
		x=0;
		for(i=1;i<=m;i++)				//Sn = ½ n ( a + Un ) atau Sn = ½ n [ 2a + ( n – 1 ) b ]
		{
			jumlah=jumlah+((n*(2*i+(n-1)*i))/2)-((x*(2*i+(x-1)*i))/2);								
			x++;
		}
		if(m>3 && n>3) jumlah-=4;
		jumlah=jumlah%1000000007;
		printf("%lld\n", jumlah);
	}
	return 0;
}

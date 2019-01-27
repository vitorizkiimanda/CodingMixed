#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,q,awal,akhir,asal,ganti,selisih,temp,salah=0,x;
	int perintah;
	map<int,int> bilangan;
	scanf("%d", &t);
	x=1;
	for(int i=1;i<=t;i++)
	{
		scanf("%d %d", &n,&q);
		for(int j=1;j<=n;j++)
			scanf("%d", &bilangan[j]);
		
		for(int j=1;j<=q;j++)
		{
			scanf("%d", &perintah);
			if(perintah==2)
			{
				scanf("%d %d", &awal,&akhir);
				for(int k=awal;k<akhir;k++)
				{
					if(k==awal)
					{
						selisih=abs(bilangan[awal+1]-bilangan[awal]);
						temp=selisih;
						if(temp!=selisih) salah = 99;
					}
					else
					{
						if(temp!=(selisih=abs(bilangan[k+1]-bilangan[k]))) salah = 99;
						temp=selisih;
					}
				}
			}
			else 
			{
				scanf("%d %d", &asal,&ganti);
				bilangan[asal]=ganti;
			}
			if(x==i)
			{
				printf("Case #%d:\n", i);
				x++;
			}
			if(perintah==2)
			{
				if(salah!=99) printf("YES\n");
				else printf("NO\n");
			}
			salah=0;
		}
		x=i+1;
		
	}
	return 0;
}

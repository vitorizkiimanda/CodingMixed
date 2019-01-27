#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k,t,A[10000],jumlah,JUMLAH,L[10000],R[10000],n,q;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&q);
		for(int i=0;i<n;i++)
			scanf("%d", &A[i]);
		for(int i=0;i<q;i++)
			scanf("%d %d", &L[i],&R[i]);
		k=0;
		jumlah=0;
		for(int i=0;i<n;i++)
					jumlah=jumlah+A[i];     //simpen hasil jumlah 1-1,1-2,1-3,1-4,,,,1-n llau kalau ditanay tinggal kurangi aja yang tidak perlu
				
		while(q--)
		{
		
			if(L[k]>R[k] or R[k]>n) printf("-1\n");
			else
			{
				JUMLAH=jumlah;
				for(int i=0,v=n-1;i<(L[k]-1) or v>(R[k]-1);i++,v--)			//jumlah jadi jumlah keseluruhan dikurangi yang gak diperlukan
					JUMLAH=JUMLAH-(A[i]+A[v]);
				/*for(int i=n-1;i>(R[k]-1);i--)			
					JUMLAH=JUMLAH-A[i];*/
				printf("%d\n",JUMLAH);
			}
			k++;
		}
	}
	
	return 0;
}

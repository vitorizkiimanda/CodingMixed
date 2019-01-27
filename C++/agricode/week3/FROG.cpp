#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,L,R; //N banyak katak, L energi warga, R pengurangan energi
	int *katak;
	int i,counter=0;
	scanf("%d %d %d",&N,&L,&R);
	
	katak=(int*)malloc(N*sizeof(int));
	
	for(i=0;i<N;i++)
		scanf("%d", &katak[i]);
		
	sort(katak, katak+N);
	
	for(i=N-1;i>=0;i--)
	{
		if(L>=katak[i])
		{
			counter++;
			L-=R;
		}
		if(L<=0) break;
	}
	printf("%d\n", counter);
	
	free(katak);
	return 0;
}

//botol susi
#include<bits/stdc++.h> // semua library
using namespace std;
#define SIZE 1000
int main()
{
	int T,N, bp[SIZE], susi,counter=0,ke=0;
	cin >> T;
	for(int i=0;i<T;i++)
	{
		cin >> N;
		ke++;
		for(int j=0;j<N;j++)
		{
			scanf("%d", &bp[j]);
		}
		cin >> susi;
		for(int j=0;j<N;j++)
		{
			if(bp[j]==susi) counter++;
		}
		if(counter!=0)
		printf("Kasus #%d: ADA %d BOTOL DITEMUKAN\n", ke,counter);
		else printf("Kasus #%d: TIDAK ADA\n",ke);
		counter=0;
	}
}

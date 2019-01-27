W//magic dice
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int T, N, S,jumlah;
	int counter=1;
	cin >> T;
	for(int i=0;i<T;i++)
	{
		cin >> N >> S;
		if(S!=1) 
		{
			jumlah = ((N*S-(N-1))*(2*N+(N*S-N)))/2;	
		
			printf("Kasus %d: %lld\n",counter, jumlah) ;
		}
		else printf("Kasus %d: %lld\n",counter, N) ;
		counter++;
	}
	return 0;
}

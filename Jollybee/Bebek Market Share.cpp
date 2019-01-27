//BebekMarketSale
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,N,x,counter=0,diskon=0;
	vector <int> harga;
	cin >> T;
	for(int i=0;i<T;i++)
	{
		cin >> N;
		for(int j=0;j<N;j++)
		{
			cin >> x;
			harga.push_back(x);
		}
		sort(harga.begin(),harga.end()); // kalau array, sort(namaarray,namarray+sizeiniput(N)) contoh, sort(arr,arr+N)
		for(int k=N-1;k>0;k-=3) // karena sort dari kecil ke besar
		{
			if(k-2>=0)
			diskon=diskon+harga[k-2];
		}
		printf("%d\n", diskon);
		diskon=0;
		harga.clear(); //untuk menghindari tubrukan data
		
		
	}
	return 0;
}

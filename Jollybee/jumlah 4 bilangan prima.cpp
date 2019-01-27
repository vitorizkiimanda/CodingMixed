/* 
cek prima ,, cek satu persatu bilangan mulai dari 1 hingga akar dari batas maks

contoh : 30 , cek 1,2,3,4,5,6 , karena akar 30 dibulatkan ke atas 6
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,basis,akar,N,prima[100],data[1000],x=1,jumlah=0,c[500]={0};
	cin >> T;
	for(int j=0;j<100;j++)
		{
			data[j]=j;
		}
		basis=2;
		while(basis<=sqrt(100))
		{
			for(int j=2;j<=100;j++)
			{
				for(int k=0;k<=100;k++)
					if(data[k]==basis*j) data[k]=-99;  //sieve of eratosthenos
					
			}
			basis++;
		}
		for(int j=2;j<100;j++)
		{
			if(data[j]!=-99) {
				prima[jumlah]=data[j];
				jumlah++;	
			}
		}
		for (int j=0; j<jumlah-3; j++){
			for (int k=j+1; k<jumlah-2; k++){
				for (int l=k+1; l<jumlah-1; l++){
					for (int m=l+1; m<jumlah; m++){
						++c[prima[j]+prima[k]+prima[l]+prima[m]];//loop kombinasi
					}
				}
			}
		}
	for(int i=0;i<T;i++)
	{
		cin >> N;
		printf("Case #%d: %d\n",i+1,c[N]);	
	}
	return 0;
}

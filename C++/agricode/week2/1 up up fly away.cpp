#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int x,y,t,n,k,temp=0;
	vector<long int> bilangan;
	scanf("%ld", &t);
	for(int i=1;i<=t;i++)
	{
		scanf("%ld %ld", &n,&k);
		for(int j=0;j<n;j++) //scan data
		{
			scanf("%ld", &temp);
			bilangan.push_back(temp);
		}	
		sort(bilangan.begin(),bilangan.begin()+n-1); // cari yang terkecil
		
		temp=bilangan[0];
		y = k - 2*temp;
		if(y<0) y=0;
		printf("Jawaban #%ld: %ld\n",i,y);
		bilangan.clear();
		
	}
	return 0;
}

//longest prefix
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,N,maks=0,x=0;
	vector <string> kata;
	string raw;
	cin >> T;
	for(int i=0;i<T;i++)
	{
		cin >> N;
		for(int j=0;j<N;j++)
		{
			cin >> raw;
			kata.push_back(raw);
			
			if(raw.length() > maks) maks=raw.length();
		}
		printf("Case #%d: ",i+1);
		for(int j=0;j<maks;j++)
		{
			
			for(int k=0;k<N;k++)
			{
				if(k>0 and kata[k][j]!=kata[k-1][j])
				{
					goto TANDA;	
				}
			}
			x++;	
		}
		TANDA:
		for(int j=0;j<x;j++)	
				cout<<kata[0][j];
		cout<<endl;
		x=0;
		kata.clear();
		maks=0;
	}
	return 0;
}

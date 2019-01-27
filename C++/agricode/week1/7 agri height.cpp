#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,x,j=0;
	vector<int> tinggi,urut;
	map<int,int> data;
	cin >> N;
	for(int i=0;i<N;i++)
	{
		cin >> x;
		tinggi.push_back(x);
	}	
	
	sort(tinggi.begin(), tinggi.begin()+N);
	
	for(int i=0;i<N;i++)
	{
		x=tinggi[i];
		if(data[x]==0)
		{
			urut.push_back(x);
			j++;
			
		}
		++data[x];
	}

	for(int i=0;i<j;i++)
		cout << urut[i] <<" "<< data[urut[i]]<<endl;	

	return 0;
}

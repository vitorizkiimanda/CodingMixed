#include<iostream>
#define SIZE 100
using namespace std;

int main()
{
	int N,n,tinggi[SIZE],high=0,low=0,i,j,now=0;
	cin >> N;
	while(i<N)
	{
		cin >> n;
		for(j=0;j<n;j++)
		{
			cin >> tinggi[j];
		}
		now=tinggi[0];
		for(j=1;j<n;j++)
		{
			if(tinggi[j] > now) high++;
			if(tinggi[j] < now) low++;
			now=tinggi[j]; 
		}
		// Case 3: 4 0
		cout<<"Case "<<i+1<<": "<<high<<' '<<low<<endl;
		high=0;
		low=0;
		i++;
	}
	return 0;
}

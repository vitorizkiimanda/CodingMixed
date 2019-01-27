#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<int> ballnumber, kotak;
	int N,x,urut=1,operasi=0,sementara=0,j=1;
	cin >> N;
	for(int i=0;i<N;i++)
	{
		cin >> x;
		ballnumber.push(x);
	}

	while(ballnumber.size())
	{	
		while(j<sementara)
		{
			x=kotak.front();
			ballnumber.push(x);
			kotak.pop();
			j++;
		}
		j=0;
		x=ballnumber.front();
		for(sementara=0;x==urut;urut++)
		{
				if(x==urut)
				{
					ballnumber.pop();
					x=ballnumber.front();
					if(ballnumber.size()==0) goto selesai;
				}
				else goto muter;
		}
		muter:
		while(x!=urut)
		{
			x=ballnumber.front();
			kotak.push(x);
			sementara++;
			ballnumber.pop();
			x=ballnumber.front();
		}
		if((x==urut)&&(sementara!=0))
			{
				operasi++;
				j=0;
			}
	}
	selesai:
	cout << operasi << endl; 
	return 0;
}

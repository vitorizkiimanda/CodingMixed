#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,senyum=0 ,sedih=0;
	string kalimat;
	int found1,found2;
	scanf("%d", &t);
	while(t--)
	{
		cin >> kalimat;
		for(int i=0;i<kalimat.length()/6;i++)
		{
			found1=kalimat.find("setuju");
			if(found1==0)
			{
				senyum++;
				kalimat[found1] = '@';
			}
			else if(found1>-1)
			{
				senyum++;
				kalimat[found1] = '@';
			}
			found2=kalimat.find("menolak");
			if(found2==0)
			{
				sedih++;
				kalimat[found2] = '@';
			}
			else if(found2>-1)
			{
				sedih++;
				kalimat[found2] = '@';
			}
		}
		if(senyum>sedih) printf("ya :)\n");
		else printf("tidak :(\n");
		senyum=0;
		sedih=0;	
	}
	return 0;
}

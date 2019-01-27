#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, tinggi=0,baru=0,temp=0,a1;
	
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		if(i==0)
		{
			scanf("%d", &baru);
			a1=baru;	
		}
		else
		{
			scanf("%d", &a1);
			baru=a1;
			baru=abs(baru-temp);
			
		}
		if(tinggi<baru)
			tinggi =baru;
		temp=a1;
		baru=0;	
	}
	printf("%d\n", tinggi);
	return 0;
}

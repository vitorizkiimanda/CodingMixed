#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,data[1001],jumlah=0; 
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d",&data[i]);
	
	if(n==1 and data[0]<=0) printf("sayang sekali nak :(\n");
	
	else
	{
		for(int i=0;i<n;i++)
		{
			if(data[i]<0 and data[i+1]<0)
			{
				if(data[i]>=data[i+1]) jumlah=jumlah+data[i];
				else jumlah=jumlah+data[i+1];
				i++;
			}
			else if	(data[i]<0) continue;
			else jumlah=jumlah+data[i];
				
		}
		
		if(jumlah<0) printf("sayang sekali nak :(\n");
		else printf("%d\n", jumlah);
	}
	return 0;
}

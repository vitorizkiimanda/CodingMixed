#include<bits/stdc++.h>
#define SIZE 40001
using namespace std;
int main()
{
	int T, cowok,cewek,boy[SIZE],girl[SIZE], minimal,jumlah=0,idx=0,mid,left,right;
	cin >> T;
	for(int x=1;x<=T;x++)
	{
		scanf("%d %d %d", &cowok, &cewek,&minimal);
		for(int i=1;i<=cowok;i++)
			scanf("%d", &boy[i]);
			
		for(int i=1;i<=cewek;i++)
			scanf("%d", &girl[i]);
		
		//yang mau di binser yang cewek
		for(int i=1;i<=cowok;i++)
		{
			left=1;
			right=cewek;
			while(left<=right)
			{
				mid=(right+left)/2;
				if(boy[i]+girl[mid]>=minimal)
				{
					idx=mid;
					right=mid-1;
				}
				else
				{
					left=mid+1;
				}
			}
			if(idx!=0)
				jumlah = jumlah + cewek -(idx-1); // karena mulai dari basis 0
		}
		printf("Kasus #%d: %d\n",x,jumlah );
		jumlah =0;
		idx=0;
	}
	return 0;
}

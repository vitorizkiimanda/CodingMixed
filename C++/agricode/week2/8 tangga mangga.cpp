#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,tinggi[10001],q,quest,counter=0,i;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d", &tinggi[i]);
	sort(tinggi,tinggi+n);
	
	scanf("%d", &q);
	while(q--)
	{
		scanf("%d", &quest);
		for(int i=0;i<n;i++)
		{
			if(quest != tinggi[i]) counter++;
			else break;
		}
		if(tinggi[i-1]==quest) printf("%d\n", counter);
		else printf("-1\n");
		counter = 0 ;
	}
	return 0;
}

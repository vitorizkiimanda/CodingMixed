#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,jumlah=0,x=1;
	int *data;
	
	scanf("%d %d", &n,&k);
	
	data=(int*)malloc(n*sizeof(int));
	
	for(int i=0;i<n;i++)
		scanf("%d", &data[i]);
	
	sort(data,data+n);
	
	for(int i=0;i<n;i++)
	{
		if(x<=k)
        {
            jumlah=jumlah+data[i];
        	if(data[i]==data[i+1]) x++;
        }
        if(data[i]!=data[i+1]) x=1;
	}
	
	printf("%d\n", jumlah);
	
	free(data);
	return 0;
}

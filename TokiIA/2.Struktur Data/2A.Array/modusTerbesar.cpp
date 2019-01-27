#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,x[100001],modus,temp;
	int array[1001]={0};
	
	scanf("%d", &n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d", &x[i]);	
		array[x[i]]++;
	}
	
	temp=-1;
	modus=-1;
	
	int v=0;
	for(int i=0;i<n;i++)
	{
		if(temp<=array[x[i]]) 
		{
			if(modus<x[i] or temp<array[x[i]]) modus=x[i];
			v++;
			temp=array[x[i]];	
		}
	}
	
	printf("%d\n", modus);
	return 0;
	
}

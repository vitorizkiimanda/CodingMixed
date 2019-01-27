#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x,counter;
	
	scanf("%d", &n);
	
	while(n--)
	{
		scanf("%d", &x);
	
		counter = 0;
		for(int i=2;i<x;i++)
		{
			if(x%i==0) counter++;
			if(counter>2) break;
		}
			
		
		if(counter <=2) printf("YA\n");
		else printf("TIDAK\n");
		
		counter=0;
	}
	return 0;
}

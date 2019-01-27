#include<bits/stdc++.h>

using namespace std;

int main()
{
	int m,n;
	int matriks[101][101];
	
	scanf("%d %d", &m,&n);
	
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d", &matriks[i][j]);
			
	for(int j=0;j<n;j++)
		for(int i=m-1;i>=0;i--)
		{
			printf("%d", matriks[i][j]);
			if(i==0) printf("\n");
			else printf(" ");
		}
	return 0;	


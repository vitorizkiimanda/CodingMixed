#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m1,n1,m2,n2;
	int matriks1[76][76],matriks2[76][76];
	int temp;
	
	scanf("%d %d", &m1,&n1);
	
	for(int i=0;i<m1;i++)
		for(int j=0;j<n1;j++)
			scanf("%d", &matriks1[i][j]);
			
	scanf("%d %d", &m2,&n2);
	
	for(int i=0;i<m2;i++)
		for(int j=0;j<n2;j++)
			scanf("%d", &matriks2[i][j]);
			
	
	for(int i=0;i<m1;i++)
		for(int j=0;j<n2;j++)
		{
			temp=0;
			for(int k=0;k<n1;k++)
			{
				temp=temp+matriks1[i][k]*matriks2[k][j];
				if(k==n1-1)	printf("%d", temp);					
			}
			if(j==n2-1) printf("\n");
			else printf(" ");
		}
	
	return 0;
}

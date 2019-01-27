#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10][10];
	
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			scanf("%d", &a[i][j]);
			
	for(int j=0;j<3;j++)
		for(int i=0;i<3;i++)
		{
			printf("%d", a[i][j]);
			if(i==2) printf("\n");
			else printf(" ");
		}
			return 0;
}

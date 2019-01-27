#include<bits/stdc++.h>
using namespace std;
#define SIZE 1001
int main()
{
	int i,j,n,m,data[SIZE][SIZE],q,a,b,c,d,status;
	scanf("%d %d", &n,&m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &data[i][j]);
	
	scanf("%d", &q);
	while(q--)
	{
		scanf("%d %d %d %d %d", &a,&b,&c,&d,&status);
		i=a+c;
		j=b+d;
		if(data[i-1][j-1]==1)
		{
			if(status==1) printf("White");
			else printf("Black");
		}
		else if(data[i-1][j-1]==2)
		{
			if(status==1) printf("Green");
			else printf("Blue");
		}
		else if(data[i-1][j-1]==3)
		{
			if(status==1) printf("Brown");
			else printf("Silver");
		}
		else if(data[i-1][j-1]==4)
		{
			if(status==1) printf("Pink");
			else printf("Red");
		}
		else if(data[i-1][j-1]==5)
		{
			if(status==1) printf("Yellow");
			else printf("Orange");
		}
		printf("\n");
	}
	
	return 0;
}

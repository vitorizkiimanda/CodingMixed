#include<bits/stdc++.h>
using namespace std;

int m,n;
bool kondisi[81][81];
char petak[81][81];
void dfs(int i, int j)
{
	if(i>=1 and i<=m and j>=1 and j<=n and petak[i][j]!='#' and !kondisi[i][j])
	{
		kondisi[i][j]=true; //menandai kalau udah dikunjungi atau true
		dfs(i+1,j);
		dfs(i,j+1);
		dfs(i-1,j);
		dfs(i,j-1);
	}
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		memset(kondisi,false,sizeof(kondisi));
		scanf("%d %d", &m,&n);
		for(int i=1;i<=m;i++)
		{
			getchar();
			for(int j=1;j<=n;j++)
				scanf("%c", &petak[i][j]);
		}
		for(int i=1;i<=m;i++)
			for(int j=1;j<=n;j++)
				if((i==1 or i==m or j==1 or j==n) and petak[i][j]==' ' and !kondisi[i][j]) // untuk cek belum dikunjungi atau masih false
					dfs(i,j);
		
		bool boolean=0;
		
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(petak[i][j]==' ' and !kondisi[i][j])
				{
					boolean=1;
					break;
				}
			}
			if(boolean==1) break; 
		}
		if(boolean==1) printf("YA\n");
		else printf("TIDAK\n");
	}
	return 0;
}

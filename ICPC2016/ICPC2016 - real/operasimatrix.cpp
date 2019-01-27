#include<iostream>
using namespace std;
#define SIZE 50
long long int x,y,matriks[SIZE][SIZE],a[SIZE][SIZE],n,i,j;
int t,m,q;
int r,c,s;
void cw(int r, int c, int s)
{
	for(x=0,j=c;j<c+s;j++,x++)
            for(y=0,i=c+s;i>=c;i--,y++)
            {
                a[x][y]=matriks[i][j];
            }
    for(x=0,j=c;j<c+s;j++,x++)
            for(y=0,i=c+s;i>=c;i--,y++)
                matriks[x][y] = a[x][y];
}

void ccw(int r, int c, int s)
{
	for(x=0,i=c+s;i>=c;i--,x++)
            for(y=0,j=c;j<=c+s;j++,y++)
            {
                a[x][y]=matriks[j][i];
            }
    for(x=0,j=c;j<=c+s;j++,x++)
            for(y=0,i=c+s;i>=c;i--,y++)
                matriks[x][y] = a[x][y];
}

void rx(int r, int c, int s)
{
	for(x=0,i=c+s;i>=c;i--,x++)
            for(y=0,j=c;j<=c+s;j++,y++)
            {
                a[x][y]=matriks[j][i];
            }
	for(i=r;i<=r+s;i++)
	   for(j=c;j<=c+s;j++)
	      matriks[i][j]=a[(r+s)-i][j];
}

void ry(int r, int c, int s)
{
	for(x=0,i=c+s;i>=c;i--,x++)
            for(y=0,j=c;j<=c+s;j++,y++)
            {
                a[x][y]=matriks[j][i];
            }
	for(i=r;i<=r+s;i++)
	   for(j=c;j<=c+s;j++)
	      matriks[i][j]=a[i][(c+s)-j];
}
int main()
{
	string perintah1,perintah2;
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d %d %d", &m,&n,&q);
		for(int v=0;v<m;v++)
			for(int x=0;x<n;x++)
				scanf("%d", &matriks[v][x]);
		
		for(int j=0;j<q;j++)
		{
			scanf("%s %s", &perintah1,&perintah2);
			if((perintah1 == "rotate") and (perintah2=="cw"))
			{
				scanf("%d %d %d", &r,&c,&s);
				cw(r,c,s);
			}
			else if((perintah1 == "rotate") and (perintah2=="ccw"))
			{
				scanf("%d %d %d", &r,&c,&s);			
				ccw(r,c,s);
			}
			else if((perintah1 == "reflect") and (perintah2=="x"))
			{
				scanf("%d %d %d", &r,&c,&s);
				rx(r,c,s);
			}		
			else if((perintah1 == "reflect") and (perintah2=="y"))
			{
				scanf("%d %d %d", &r,&c,&s);
				ry(r,c,s);
			}
			else continue;
		}
		printf("Case #%d:\n",i);
		for(int v=0;v<m;v++)
			for(int x=0;x<n;x++)
			{
				printf("%d", matriks[v][x]);
				if(x==n-1) printf("\n");
				else printf(" ");
			}
				
	}

	return 0;
}

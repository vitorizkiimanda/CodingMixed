//The Triwizard Cup
#include<bits/stdc++.h>
using namespace std;

struct potter // sekedar nama tipe yang ingin dibuat
{
	int x,y,jarak;
};
int main()
{
	int T,m,n,x,y,jarak;
	bool f[100][100];
	queue <potter> vito;//queue namanya vito dengan tipe data potter, vito punya x,y,jarak
	potter q; // nama struct nya agar bisa di push
	char pola[100][100],harry[100][100],trofi[100][100];
	cin >> T;
	for(int i=0;i<T;i++)
	{
		memset(f,false,sizeof(f));//untuk set semua f , false
		cin >> m>> n;
		for(int j=0;j<m;j++)
			for(int k=0;k<n;k++)
			{
				cin >> pola[j][k];
				if(pola[j][k]=='H')
				{
					x=j;
					y=k;	
				}	
			}	
		q.x=x; //q pada struct potter disamakan dengan x yang scan/pada line 23
		q.y=y;
		q.jarak=0;
		
		while(!vito.empty()) //agar untuk tes case selanjutnya dihapus dulu.
		{
			vito.pop(); // ngepop sampek kosong
		}
		
		vito.push(q); //dimasukkan ke vito
		
		while(!vito.empty()) //selama tidak koson
		{
			x=vito.front().x;
			y=vito.front().y;
			jarak=vito.front().jarak;
			vito.pop();
			if(x>=0 and y>=0 and x<m and y<n and pola[x][y]!='#' and !f[x][y]) //!f[x][y] masih perawan
			{
				f[x][y] = true;//nandai dikunjungi
				if(pola[x][y]=='P')//kalo udah sampek
				{
					cout<<jarak<<' '<<x+1<<' '<<y+1<<endl;
					break;
				}
				q.x=x-1; q.y=y; q.jarak=jarak+1; vito.push(q); // sekali push 4 arah langsung
				q.x=x+1; q.y=y; q.jarak=jarak+1; vito.push(q);//dapet jalan terpendek
				q.x=x; q.y=y-1; q.jarak=jarak+1; vito.push(q);//tapi lebih berat prosesnya
				q.x=x; q.y=y+1; q.jarak=jarak+1; vito.push(q);				
			}
		}
	}
	
	
	return 0;
}

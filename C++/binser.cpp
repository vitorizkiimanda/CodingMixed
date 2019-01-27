//binser : binary search
/*
	syarat : data harus urut
			while(left<=right)
	fungsi : untuk mencari sesuatu yg optimal ( minimal atau maximal ) 
			untuk mencari batas
	inti : batas atas(right) , batas bawah(left)
		 batas tengah
		 
		 lalu kondisi : while(left<=right)
	
	jika batas tengah kurang,, right digeser kekiri
	jika batas tengah lebih,, left digeser kekanan
	
	jika batas left dan batas right sama ,, maka right digeser ke kiri sekali lagi agar keluar dari while..
	//
	
	misal ada,
	
	1 2 4 6 7 9 10 12 21 25 28 30 31 32 34 35
	
	array panjangnya 16
	
	kalo mau cari angka 31,, kalo binser ..
		
		panjang array bagi 2 =   16/2  8
		
		lihat indeks ke 8 = 21
		
		21 masih < 31 
		
		maka lagi,
		8 + 16 lalu /2 = 12
		
		12 - 16 
		14
		
		32>31
		udah lebih besar
		
		jadi 
		12 - 14
		13
		
		ketemu 31
	
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, data[100],cari,l,r,mid;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &data[i]);
	}	
	scanf("%d", &cari);
	l=1; r=n;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(data[mid]>cari)
		{
			r=mid-1; // batas kanan geser kiri
		}
		else
		if(data[mid]<cari)
		{
			l=mid+1;// batas kiri geser kanan
		}
		else
		{
			printf("%d", mid); //data udah ketemu, output jawaban,   print indeksnya
			break;
		}
	}
	return 0;
}


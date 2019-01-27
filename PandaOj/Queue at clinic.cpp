#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<char, int , int> pasien;
	int t,t1,temp=0,temp2=0,antrian=0;
	char huruf;
	scanf("%d", &t);
	
	for(int i=1;i<=t;i++)
	{
		scanf("%d", &t1);
		while(t1--)
		{
			scanf("%c", &huruf);
			antrian++;
			if(huruf=='d')
			{
				scanf("%d", &temp);
				pasien[huruf]=temp;
				pasien[huruf][temp]=antrian;
			}
			if(huruf=='p')
			{
				scanf("%d %d", &temp, &temp2)
				if(temp2==-1) pasien.erase('d',temp2);
				else
				{
					
				}
			}
			if(huruf=='a')
			{
				temp=nomor.front();
				panggil.push(temp);
				
			}
		}
		printf("Kasus #%d:\n",i);
		for(int j=0;j<x;j++)
			printf("%d\n", );
		
	}
	
	return 0;
}

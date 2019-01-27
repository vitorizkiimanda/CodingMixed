//kamus panda
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,x=0;
	char huruf[200];
	char cek[200];
	map<char,int> kamus;
	string kata;
	cin >> T;
	for(int i=0;i<T;i++)
	{
		cin >> kata;
		kamus.clear();
		for(int j=0;j<kata.length();j++)
		{
			huruf[j] = kata[j];	
			cek[j] = huruf[j];
			//cout << cek[j] << endl;
			if(kamus[cek[j]]==0)
			{
				x++;
				++kamus[cek[j]];
				
			}
		}
		cout << x <<endl;
		x=0;
		
	}
	return 0;
}

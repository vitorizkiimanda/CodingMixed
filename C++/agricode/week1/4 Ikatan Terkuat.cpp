#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, agri, ikatan, terbesar=0 ;
	cin >> n >> agri;
	while(n--)
	{
		cin >> ikatan;
		ikatan=abs(ikatan-agri);
		if(terbesar<ikatan)
			terbesar=ikatan;
	}
	cout << terbesar << endl;
	return 0;
}

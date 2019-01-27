#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	
	while((cin >> x))
	{
		if(x>=1 and x<=9) printf("satuan\n");
		else if(x>=10 and x<=99) printf("puluhan\n");
		else if(x>=100 and x<=999) printf("ratusan\n");
		else if(x>=1000 and x<=9999) printf("ribuan\n");
		else if(x>=10000 and x<=30000) printf("puluhribuan\n");
	}
	
	
	
	return 0;
}

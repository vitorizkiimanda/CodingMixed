#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	scanf("%d", &a);
	
	if(a<10) printf("satuan\n");
	else if(a<100) printf("puluhan\n");
	else if(a<1000) printf("ratusan\n");
	else if(a<10000) printf("ribuan\n");
	else printf("puluhribuan\n");
	return 0;
}

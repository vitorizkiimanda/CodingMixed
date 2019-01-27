#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,counter;
	double terbesar,terkecil,rata;
	double x;
	
	scanf("%d", &n);

	rata=0.0;

	terkecil = 1000000.0;
	terbesar = -1000000.0;
	
	counter =n;
	
	while(counter--)
	{
		scanf("%lf", &x);
		if(terkecil>x) terkecil=x;
		if(terbesar<x) terbesar=x;
		rata+=x;
	}
	rata/=n;
	printf("%.2lf %.2lf %.2lf\n", terkecil, terbesar, rata);
	
	return 0;
}

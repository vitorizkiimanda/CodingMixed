#include<bits/stdc++.h>

using namespace std;

int a,b;

int swap(int *c,int *d)
{
	int *temp;
	temp=c;
	c=d;
	d=temp;
}

int main()
{
	scanf("%d %d", &a,&b);
	swap(a,b);
	printf("%d %d\n", a,b);
	return 0;
}

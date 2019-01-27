#include<bits/stdc++.h>
using namespace std;

int pangkat(int y,int x)
{
	if (x==0) return 1;
    else if (x>0)return y*pangkat(y,x-1);
        else return (pangkat(y,x+1))/y;
}
int main()
{
	int a,b,basis=2;
	scanf("%d %d", &a,&b);
	printf("%d", pangkat(basis,a) );
	return 0;
}

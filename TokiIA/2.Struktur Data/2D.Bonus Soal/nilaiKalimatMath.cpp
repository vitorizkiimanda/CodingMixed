#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n1,n2;
	char operasi;
	
	scanf("%d %c %d", &n1,&operasi,&n2);
	if(operasi=='+')
	{
		printf("%d\n", n1+n2);	
	}
	else if(operasi=='-')
	{
		printf("%d\n", n1-n2);
	}
	else if(operasi=='*')
	{
		printf("%d\n", n1*n2);
	}
	else if(operasi=='<')
	{
		if(n1<n2) printf("benar\n");
		else printf("salah\n");
	}
	else if(operasi=='>')
	{
		if(n1>n2) printf("benar\n");
		else printf("salah\n");		
	}
	else if(operasi=='=')
	{
		if(n1==n2) printf("benar\n");
		else printf("salah\n");
	}
	
	return 0;
}

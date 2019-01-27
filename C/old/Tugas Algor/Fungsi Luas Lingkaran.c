#include<stdio.h>
float luasLingkaran (float r)
{
	float phi,luas;
	phi=3.14;
	luas=phi*r*r;
	printf("%.2f\n",luas); 
	return ;
}
int main()
{
	float r;
	scanf("%f", &r);
	luasLingkaran (r);
	return 0; 
	
}


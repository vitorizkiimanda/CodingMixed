#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,zx,zy,hx,hy,dx,dy,n;
	int *X,*Y;
	int i,Z,H,D;
	double jarakz,jarakh,jarakd;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d %d %d %d",&zx,&zy,&hx,&hy,&dx,&dy);
		scanf("%d",&n);
		
		X=(int*)malloc(n*sizeof(int));
		Y=(int*)malloc(n*sizeof(int));
		
		for(i=0;i<n;i++)
			scanf("%d %d", &X[i],&Y[i]);
		
		Z=0;
		H=0;
		D=0;
		
		for(i=0;i<n;i++)
		{
			jarakz=(float)sqrt((X[i]-zx)*(X[i]-zx)+(Y[i]-zy)*(Y[i]-zy));
			jarakh=(float)sqrt((X[i]-hx)*(X[i]-hx)+(Y[i]-hy)*(Y[i]-hy));
			jarakd=(float)sqrt((X[i]-dx)*(X[i]-dx)+(Y[i]-dy)*(Y[i]-dy));
					
			
			if(jarakz==jarakh==jarakd || jarakh==jarakd || jarakh==jarakz || jarakd==jarakz ) Z++;
			else if(jarakz<=jarakh && jarakz<=jarakd) Z++;
			else if(jarakh<jarakz && jarakh<jarakd) H++;
			else if(jarakd<jarakz && jarakd<jarakh) D++; 
		}
		if(Z>H && Z>D) printf("zulfahmi\n");
		else if(H>Z && H>D) printf("habibi\n");
		else if(D>Z && D>H) printf("dhizes\n");
		else printf("seri\n");
		
		free(X);
		free(Y);	
	}
	return 0;
}

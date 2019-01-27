#include<stdio.h>
#include<math.h>
int jarakEuclid (int x1, int y1, int x2, int y2)
{
	float jarak,v,w;
	v=abs(x2-x1);
	w=abs(y2-y1);
	jarak = sqrt((v*v)+(w*w));
	printf("%.2f\n",jarak);
	
}
int main()
{
	int x1,x2,y1,y2;
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	jarakEuclid (x1,y1,x2,y2);
	return 0;
}

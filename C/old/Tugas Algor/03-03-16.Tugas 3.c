#include<stdio.h>s
#include<math.h>
    int main()
    {
        int a,b,c,det;
        float x1,x2;
        scanf("%d %d %d", &a,&b,&c);
        det=b*b-4*a*c;
        x1=((-1.0*b)+(sqrt(det)))/(2.0*a);
        x2=((-1.0*b)-(sqrt(det)))/(2.0*a);
        printf("%.2f %.2f\n",x1,x2 );
        return 0;
    }

#include<stdio.h>
#include<math.h>
   int main()
    {
       short int a,b,c,d;
       float x1,x2;
        scanf("%hd %hd %hd",&a,&b,&c);
        d=b*b-4*a*c;
        x1=(-b + sqrt(d))/(2.0*a);
        x2=(-b - sqrt(d))/(2.0*a);
        if(d>=0) printf("%g %g\n", x1,x2);
        else if(d<0) printf("Tidak memiliki akar real.\n");
        return 0;
    }

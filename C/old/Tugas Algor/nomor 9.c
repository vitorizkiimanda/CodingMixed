#include<stdio.h>
#include<math.h>
    int main()
    {
        double a,c;
        int b;
        scanf("%lf",&a);
        b=(int) a;
        a=modf(a, &c);
        printf("%d %.5lf\n", b,a);
        return 0;
    }

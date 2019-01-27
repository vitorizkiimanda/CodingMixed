#include <stdio.h>

long double faktorial(unsigned int n)
{
    if(n==0) return 1;
    else return n*faktorial(n-1);
}

int main(void)
{
    unsigned int n;
    scanf("%u!", &n);
    printf("%.0Lf\n", faktorial(n));
    return 0;
}

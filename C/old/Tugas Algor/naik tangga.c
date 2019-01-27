#include<stdio.h>
#define yo 1000000;//tidak panjang
long long int a,b,c,d;
//tes ke-3
void fib(long long n, long long jaw[])
{
    if(n==0)
    {
        jaw[0] = 0;
        jaw[1] = 1;
        return;
    }
    fib((n/2), jaw);
    a = jaw[0];
    b = jaw[1];
    c = 2*b - a;
    if(c < 0)
            c += yo;
    c = (a*c) % yo;
    d = (a*a + b*b) % yo;
    if(n%2 == 0)
    {
        jaw[0] = c;
        jaw[1] = d;
    }
    else
    {
        jaw[0] = d;
        jaw[1] = c+d;
    }
}
int main()
{
    long long a;
    int co;
    long long jaw[2]={0};
    scanf("%d", &co);
    while(co--)
    {
        scanf("%lld", &a);
        fib(++a,jaw);
        printf("%lld\n", jaw[0]);
    }
}

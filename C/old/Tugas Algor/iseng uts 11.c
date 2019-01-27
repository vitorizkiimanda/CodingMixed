#include<stdio.h>
int main()
{
    int x, n=0;
    scanf("%d", &x);
    do
    {
        n+=x%10;
        x/=10;
    }
    while (x);
    printf("%d %d", n,x);
    return 0;
}

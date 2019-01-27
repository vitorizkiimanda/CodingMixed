#include <stdio.h>

int modulo (int x, int y)
{
    return x%y;
}

int fpb(int x, int y)
{
    if (y==0) return x;
    else if (x>=y && y>0)return fpb(y,modulo(x,y));
}

int main(void)
{
    int x,y;
    scanf("%d %d", &x, &y);
    printf("%d\n", fpb(x,y));
    return 0;
}

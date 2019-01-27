#include<stdio.h>
int main()
{
    int a=1,b=1,c;
    while(a<=b)
    {
        a+=b;
        c=b++;
        printf("%d\n", b);
    }

    return 0;
}

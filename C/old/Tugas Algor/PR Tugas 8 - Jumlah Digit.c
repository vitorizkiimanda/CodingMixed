#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d", &a);
    b=0;
    while(a!=0)
    {

        c=a%10;
        b=b+c;
        a=a/10;

    }
    printf("%d\n", b);
    return 0;
}

#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d", &a);
    b=0; c=0;
    for(b=1;b<=a;b++)
    {
        for(c=1;c<=b;c++)
            printf("*");
            printf("\n");
    }


    return 0;
}

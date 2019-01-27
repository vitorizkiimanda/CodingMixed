#include<stdio.h>
    int main()
{
    short int a,b,c,d,e;
    scanf("%hd %hd %hd", &a,&b,&c);
    d=((a>b)?((a>c)?a:c):((b>c)?b:c));
    e=((a<b)?((a<c)?a:c):((b<c)?b:c));
    printf("%hd %hd", d,e);
    return 0;
}

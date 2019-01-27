#include<stdio.h>
    int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a+b<=c)||(b+c<=a)||(c+a<=b))
    {
        printf("Bukan Segitiga\n");
        return 0;
    }
    if((a==b)&&(b==c))
    {
        printf("Segitiga Sama Sisi\n");
        return 0;
    }
    if((a==b)||(a==c)||(c==b))
    {
        printf("Segitiga Sama Kaki\n");
        return 0;
    }
    else printf("Segitiga Sembarang\n");
    return 0;
}

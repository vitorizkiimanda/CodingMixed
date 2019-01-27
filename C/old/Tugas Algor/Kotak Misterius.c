#include<stdio.h>
int main()
{
    long long total=0,harga,jum,prctemp,price;
    while(1)
    {
        price=0;
        scanf("%lld %lld", &harga,&jum);
        while(jum--)
        {
            scanf("%lld", &prctemp);
            price+=prctemp;
        }
        total+=harga;
        if(price==harga*10) break;
    }
    printf("lld\n", total);
}

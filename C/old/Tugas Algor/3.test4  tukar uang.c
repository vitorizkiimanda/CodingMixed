#include<stdio.h>
    unsigned long long int main()
    {
    unsigned long long int uang,seratus,limapuluh,sepuluh,lima,dua,satu,a,b,c,d,e;
    scanf("%llu",&uang);
    seratus=uang/100000;
    uang=uang%100000;
    limapuluh=uang/50000;
    uang=uang%50000;
    sepuluh=uang/10000;
    uang=uang%10000;
    lima=uang/5000;
    uang=uang%5000;
    dua=uang/2000;
    uang=uang%2;
    satu=uang*1;
    printf("%llu %llu %llu %llu %llu %llu\n",seratus,limapuluh,sepuluh,lima,dua,satu);
    return 0;
    }

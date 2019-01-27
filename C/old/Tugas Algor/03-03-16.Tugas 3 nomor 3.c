#include<stdio.h>
    float main()
    {
        float luas,panjang,tinggi;
        scanf("%f %f", &luas,&panjang);
        tinggi=luas/(0.5*panjang);
        printf("%f\n",tinggi);
        return 0;
    }

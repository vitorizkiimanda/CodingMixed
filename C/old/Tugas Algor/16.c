#include<stdio.h>
    int main()
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if((a<90)&&(b<90)&&(c<90))
        {
            printf("Segitiga lancip\n");
            return 0;
        }
        if(((a<90)&&(b<90)&&(c<90))&&(((a==b)||(a==c)||(c==b))))
        {
            printf("Segitiga lancip sama-kaki\n");
            return 0;
        }
        if((a==90)||(b==90)||(c==90))
        {
            printf("Segitiga siku-siku\n");
            return 0;
        }
        if(((a==90)||(b==90)||(c==90))&&(((a==b)||(a==c)||(c==b))))
        {
            printf("Segitiga siku-siku sama-kaki\n");
            return 0;
        }
        if((a>90)||(b>90)||(c>90))
        {
            printf("Segitiga tumpul\n");
            return 0;
        }
        else if((((a>90)||(b>90)||(c>90))&&((a==b)||(a==c)||(c==b))))
        {
            printf("Segitiga tumpul sama-kaki\n");
            return 0;
        }
        if((a==b)&&(b==c)) printf("Segitiga sama-sisi\n");
        return 0;
    }

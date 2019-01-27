#include<stdio.h>
int main()
{
    int a,b,c;
    long long int d;
    scanf("%d", &a);
    if ((a>=1)&&(a<=100))
    {
        for(b=1;b<=a;b++)
        {
            scanf("%lld", &d);
            c = d%3;
            if (c==0)
            {
                printf("Habis Dibagi 3\n");
            }
            else printf("Tidak Habis Dibagi 3\n");
        }
    }
    else return 0 ;
}

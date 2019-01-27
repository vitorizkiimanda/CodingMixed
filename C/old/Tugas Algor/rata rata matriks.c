#include<stdio.h>
int main()
{
    int r,c,a,sum=0,x=0,n,o,k;
    float m;
    scanf("%d %d %d", &o,&r,&c);
    x=r*c;
    for(k=1;k<=o;k++)
    {
        sum=0;
        for(a=1;a<=x;a++)
        {
            scanf("%d", &n);
            sum=sum+n;
        }
        m=(float) sum/x*1.0;
        printf("Rataan matriks ke-%d: %.2f\n", k,m);
    }
    return 0;
}

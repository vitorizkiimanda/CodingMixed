#include<stdio.h>
int main()
{
    int a,m,n,i,j;
    float hasil,x,y;
    scanf("%d %d", &m,&n);
    for(i=1;i<=m;i++)
    {
        y=0.0;
        x=0.0;
        for(j=1;j<=n;j++)
        {
            scanf("%d", &a);
            x=x+a*1.0;
            y=y+1.0;
        }
        hasil=x/y*1.0;
        printf("%.1f\n", hasil);
    }
    return 0;
}

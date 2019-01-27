#include<stdio.h>
int main()
{
    int a,m,n,i,j,x,y,z=-99;
    scanf("%d %d", &m,&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d", &a);
            if(z!=-99)
            {
                if(x<=a) x=a;
                if(y>=a) y=a;
            }
            else
            {
                x=a;
                y=a;
            }
            z=a;
        }
    }
    printf("Nilai Maksimum matriks = %d\n",x);
    printf("Nilai Minimum matriks = %d\n",y);
    return 0;
}

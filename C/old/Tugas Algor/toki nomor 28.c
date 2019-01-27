#include<stdio.h>
int main ()
{
    long long int a,b;
    int x,y,z;
    scanf("%lld %lld",&a,&b);
    if (b>a)
    {
        z=0;
        y=0;
        for (x=a;x<=b;x++)
        {
            if (x%2==0)
            {
                y=y+1;
                z=z+x;
            }
        }
    z=z/y;
    printf ("%d\n",z);
    }
    return 0;
}

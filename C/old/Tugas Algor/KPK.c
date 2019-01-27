#include"stdio.h"
main()
{
    int x,y,a,b;
    scanf("%d %d",&a,&b);
    x=a;y=b;
    while(x!=y)
    {
        if(x<y)
        x=x+a;
        else
        y=y+b;
    }

    printf("kpk = %d\n\n",x);
}

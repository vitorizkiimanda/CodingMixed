#include <stdio.h>

int c,x,y,besar,kecil,sisa;

int FPB(int a, int b)
{
if(a<b)
 {
   c=a;
   a=b;
   b=c;
   }
   do{
   sisa = a%b;

    a=b;
   b=sisa;
   }while(sisa !=0);
besar=a;
return besar;
}

int KPK(int a, int b)
{


    x=a;y=b;
    while(x!=y)
    {
        if(x<y)
        x=x+a;
        else
        y=y+b;
    }
    kecil = x;
    return kecil
    ;

}

int main()
{
    int a,b;
    scanf("%d %d", &a,&b);
    FPB(a,b);
    KPK(a,b);
    printf("%d %d\n", besar,kecil);
    return 0;
}

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


int main()
{
    int a,b;
    scanf("%d %d", &a,&b);
    FPB(a,b);
    printf("%d\n", besar);
    return 0;
}


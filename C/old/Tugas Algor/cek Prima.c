#include<stdio.h>
#include<math.h>
int x;
int isPrime(int x){
    int suku,akar,mark,v,cek=0;
    akar=sqrt(x);
    for(suku=2, mark=0;suku<=akar;suku++)
    {
      cek = x%suku;
      if(cek==0) mark++;
    }
    if(mark!=0) return 0;
    else return 1;
}
int main (){
    scanf("%d", &x);
    if(x==2)printf("%d", x=1);
    else
    printf("%d\n", isPrime(x));

}

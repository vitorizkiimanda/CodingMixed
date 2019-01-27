#include <stdio.h>
int main(){

    long long h,n,jaw,x,temp,boo,i;
    boo=0;
    jaw=0;
    while (scanf("%lld %lld",&h,&n)>0){
        temp=0;
        for (i=1; i<=n; i++){
            scanf("%lld",&x);
            temp+=x;
        }

        if (boo==0)
        if (temp!=h*10) jaw+=h;
        else{
            jaw+=h;
            boo=1;
        }
    }
    printf("%lld\n",jaw);
}

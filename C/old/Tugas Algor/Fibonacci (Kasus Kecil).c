#include <stdio.h>

int fibo(n){
if(n==1 || n==2) return 1;
    else return fibo (n-1)+fibo(n-2);
}

int main(){
    int m,n,o;
    scanf("%d", &m);
    for(o=1;o<=m;o++){
        scanf("%d", &n);
        printf("%d\n", fibo(n));
        }
return 0;
}

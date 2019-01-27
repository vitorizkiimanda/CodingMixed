#include<stdio.h>
int x,cek;
int isPrime(int x){
    cek = x%2;
    return (cek);
}
int main (){

    scanf("%d", &x);
    isPrime(x);
    printf("%d\n", cek);
    return 0;

}

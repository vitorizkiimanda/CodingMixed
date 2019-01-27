#include<stdio.h>
int x,hasil,cek;
int isEven(int x){
    cek=x%2;
    if(cek==0){
        hasil=1;
        return (hasil);
    }
    else{
        hasil=0;
        return (hasil);
    }
}
int main(){
    scanf("%d", &x);
    isEven(x);
    printf("%d\n", hasil);
    return 0;

}

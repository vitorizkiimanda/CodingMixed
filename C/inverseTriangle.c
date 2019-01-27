#include<stdio.h>

int main(){

    int in, alas, i, j;

    scanf("%d", &in);
    alas = in*2 - 1;

    for(i=1; i<=in; i++){
        for(j=1; j<=alas; j++){
            if(i==1){
                printf("*");
            }
            else{
                if(j==i || j==alas-i+1)
                    printf("*");
                else
                    if(j==alas-i+2){
                        printf("\n");
                        break;
                    }
                    else
                        printf(".");
            }
        }
        if(i==1)
            printf("\n");
    }

}


#include<stdio.h>

int main(){

    char a,b,c;
    int i,j,n;
    scanf("%d ", &n);
    scanf("%c %c %c", &a, &b, &c);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==0 && i!=n-1) printf("%c", a);
            else if(j==i) printf("%c", c);

            else if(i==n-1) printf("%c", b);
            else printf(" ");
            if(j==i){
                printf("\n");
                break;
            }
        }
    }

    return 0;



}

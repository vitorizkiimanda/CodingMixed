#include <stdio.h>

unsigned int binomial(unsigned int n, unsigned int k){
    if (k==0 || k==n) return 1;
        else if (0<k<n) {
         return binomial (n-1,k-1)+ binomial (n-1,k);
        }
}

int main(void){
    int i,j,n,k,a;
    scanf("%d", &a);
    j=a;
    for (n=0;n<a;n++){
        for (i=1;i<j;i++){
            printf("  ");
        }
        j--;
        for (k=0;k<a;k++){
    printf ("%4u", binomial (n,k)); if (k==n) break;
    }
    printf("\n");
    }
    return 0;
}

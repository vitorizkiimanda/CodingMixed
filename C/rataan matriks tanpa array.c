#include<stdio.h>

int main(){

    int jumlah;
    int v,i,j,n,m,k;
    int temp;
    float result;


    scanf("%d %d %d", &k, &m, &n);

    for(v=0;v<k;v++){
        result=0.0;
        for(i=0; i<m ; i++){
            for(j=0;j<n;j++){
                scanf("%d", &temp);
                result+=temp;
            }
        }
        printf("Rataan matriks ke-%d: %.2f\n", v+1, result/(m*n));
    }

    return 0;



}

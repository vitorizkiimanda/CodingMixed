#include <stdio.h>
int main(){
    int i,j,k,n,x,y,l,r,tengah;
    scanf("%d",&y);
    for (i=1; i<=y; i++){
        scanf("%d %d",&x,&n);
        if (x==1){
            for (j=1; j<=n; j++){
                for (k=1; k<=n; k++){
                if (j==1 || j==n || k==1 || k==n) printf("*");
                else printf(" ");
                }
            printf("\n");
            }
        }
        else
        if (x==2){
             for (j=1; j<=n; j++){
                for (k=1; k<=n; k++){
                    if (j%2==0){
                        if (k%2==0) printf("*");
                        else if (k%2>0 && k<n) printf(" ");
                    } else{
                        if (k%2==0 && k<n) printf(" ");
                        else  if (k%2>0) printf("*");
                    }
                }
            printf("\n");
            }
        }
        else
        if (x==3){
            l=1; r=n;
             for (j=1; j<=n; j++){
                for (k=1; k<=n; k++){
                    if (k==l || k==r) printf("*");
                    else if (l<=r && k<r) printf(" ");
                    else if (l>r && k<l) printf(" ");
                }
            ++l; --r;
            printf("\n");
            }
        }
        else{
             if (n%2==1) tengah=n/2+1;
             else tengah=0;
             for (j=1; j<=n; j++){
                for (k=1; k<=n; k++){
                    if (j==tengah) printf("*");
                    else{
                        if (k%2==0) printf(" ");
                        else printf("*");
                    }
                }
            printf("\n");
            }
        }
    }
}

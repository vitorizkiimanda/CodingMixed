#include<stdio.h>

long double pangkat(int n, int p){
    if(p==0) return 1;
    else if(p>0)
            return n*(pangkat(n,p-1));
    else return pangkat(n,p+1)/n;
    }


int main(){
    int n,p;
    scanf("%d %d", &n,&p);
    printf("%.6LE\n", pangkat(n,p));
    return 0;
}

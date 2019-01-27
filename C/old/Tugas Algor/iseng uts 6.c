#include<stdio.h>
int main()
{
    int a,b,hasil,n,k;
    scanf("%d", &n);
    a=0, hasil=b=1;
    for(k=1;k<n;k=k*2)
        hasil=(hasil-a)+b; a=k-1; b=k+1;
    printf("%d\n", hasil);
    return 0;
}

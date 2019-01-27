#include<stdio.h>
    int main()
{
    int n, k;
    char karak[10];
    scanf("%d", &n);
    k=0;
    do
    {
        scanf("%s", &karak);
        printf("%s\n", karak);
        k=k+1;
    }
    while (k<n);
    return 0;
}

#include<stdio.h>
int main()
{
    int i,j;
    for(i=3;i>=0;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(i==j) printf("%d", i*3-1);
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}

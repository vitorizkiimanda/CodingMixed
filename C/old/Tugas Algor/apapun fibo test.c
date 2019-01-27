#include<stdio.h>
int n,m,i,nextTerm,t1,t2;

int fibonacci(n)
{
    if(n==1)
        return 1;
    else if(n==2)
        return 1;
    else
        nextTerm = t1 + t2;
                t1 = t2;
                t2 = nextTerm;
                i++;
    return nextTerm;

}

int main()
{

    scanf("%d", &m);
    for(i=1; i<=m; i++)
    {
        scanf("%d", &n);
        if(n<1000000)
        printf("%d\n", fibonacci(n+1));
        else return 0;
    }
}

#include<stdio.h>
int i,c,d,N;
int cetakLagu(int N)
{
    d=N;
    c=N;
    for(i=1;i<N;i++)
    {
        --c;
        printf("Anak ayam turun %d, mati 1 tinggal %d\n",d,c);
        d=c;
    }
    return ;
}
int main()
{
    scanf("%d",&N);
    if(N>0)
    {
    cetakLagu(N);
    printf("Anak ayam turun 1, mati 1 tinggal induknya");
    return 0;
    }
    else
    {
        return 0;
    }
}

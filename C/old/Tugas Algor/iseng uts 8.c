#include<stdio.h>
int main()
{

    int i,x,y,p,count=0;
    scanf("%d %d %d", &x,&y,&p);
    for(i=x;i<=y; i++)
    {
        if(i%4==0)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}

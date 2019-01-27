#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d", &a,&b);
    c=a;
    if(((a==0)&&(b<=0))||(b<0))
    {
        printf("Error\n");
    }
    else if(a!=0)
        {
            if((b>0)&&(b!=1))
            {
            do
            {
                c=c*a;
                b--;
            }
            while(b!=1);
            }
            else if(b==1)
            {
                c=a;
            }
            else
            {
                c=1;
            }
            printf("%d\n", c);
        }
    else printf("0");
    return 0;
}

#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f %f", &a,&b);
    c=a;
    if((a==0)&&(b<=0))
    {
        printf("Error\n");
    }
    else if(a!=0)
    {
        if(b>0)
        {
            do
            {
                c=c*a;
                b--;
            }
        while(b>1);
        }
        else if(b==0)
        {
            c=1;
        }
        else
        {
          do
            {
                c=c*a;
                b++;
            }
            while(b<-1);
            c=1/c;
        }
    printf("%.3f\n", c);
    }
    else printf("0");
    return 0;
}

#include<stdio.h>
int main()
{
    int n,a=0,b=0,c=0,x=0,y=0,z=0,v;
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        scanf("%d %d",&y,&v);
        if(y==1)
        {
            for (a = 1; a <= v; a++)
            {
                for (b = 1; b <= v; b++)
                {

                if(b==1) printf ("*");
                else if((a==1)||(a==v)) printf ("*");
                else printf(" ");

                }
                printf("*");
                printf("\n");

            }
        }
        else if(y==2)
        {
            for (a = 1; a <= v; a++)
            {
                for (b = 1; b <= v; b++)
                {
                if((b%2!=0)&&(a%2!=0)) printf ("*");
                else if((b%2==0)&&(a%2==0)) printf ("*");
                else printf(" ");
                }
                printf("\n");
            }
        }
        else if(y==3)
        {
            for (a = 1; a <= v; a++)
            {
                for (b = 1; b <= v; b++)
                {
                x=a+b;
                y=v+1;
                if((b==a)||(x==y)) printf("*");
                else printf(" ");
                }


                printf("\n");
            }
        }
        else
        {

            for (a = 1; a <= v; a++)
            {
                for (b = 1; b <= v; b++)
                {
                if(v%2==0)
                {
                    c=v/2;
                    if((b%2!=0)||((a==c)&&(b<v))||(a==(c+1)&&(b<v))) printf ("*");
                    else printf(" ");
                }
                else
                {
                    c=(v+1)/2;
                    if((b%2!=0)||(a==c)) printf ("*");
                    else printf(" ");
                }
                }
                printf("\n");
            }

        }

    }

    return 0;
}

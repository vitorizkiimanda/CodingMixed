#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d",&a);
    i=1;
    while(i<=a)
    {
        b=1;
        while(b<=a)
        {
            if((i==1)||(i==a))
            {
                printf("*");
                b++;
            }
            else
            {
                if((b==a)||(b==1))
                    printf("*");
                else
                    printf(" ");
                    b++;
            }

        }
        i++;
        printf("\n");

    }
    return 0;
}

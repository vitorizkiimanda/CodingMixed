#include<stdio.h>
int main()
{
    long x, min;
    scanf("%ld", &min);
    if(min!=-99)
    {
        scanf("%ld", &x);

        if(x!=-99)
        {
          while(x!=-99)
            {
                if(x<min) min=x;
                scanf("%ld", &x);
            }
            printf("%ld\n", min);
        }
        else printf("%ld\n", min);

    }
    else printf("empty\n");
    return 0;
}

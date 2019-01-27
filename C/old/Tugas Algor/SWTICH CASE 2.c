#include<stdio.h>
int main()
{
    int n;
    printf("Input number between 1 - 3\n\n");
    scanf("%d", &n);
    while(n>1)
    {

    switch(n)
    {
        case(1):
            {
                int n, c, k;
                scanf("%d", &n);
                for(c=1;c<=n;c++)
                    {
                    for(k=1;k<=c;k++)
                    printf("*");
                    printf("\n");
                    }
                break;
            }

        case(2):
            {
            printf("VRI\n");
            break;
            }

        case(3):
            {
            printf("vito_rizki_i\n");
            break;
            }
            printf("heelo");
            n--;

         default:
            {
            printf("Try Again\n");
            break;
            }
            printf("heelo");
    }
    }

    return 0;
}

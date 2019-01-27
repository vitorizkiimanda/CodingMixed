#include<stdio.h>
int main()
{
    int n;
    printf("Input number between 1 - 3\n\n");
    scanf("%d", &n);
    switch(n)
    {
        case(1):
            {
            printf("Vito\n");
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
         default:
            {
            printf("Try Again\n");
            break;
            }
    }

    return 0;
}

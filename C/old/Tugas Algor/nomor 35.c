#include<stdio.h>
int main()
{
	int a,b,n;
	scanf("%d", &n);
	for (a = 1; a <= n; a++) 
	{
        printf ("*");
    }

    printf ("\n");
    for (a = 1; a <= (n-2); a++) 
    {
        printf ("*");
        for (b = 1; b <= (n-2); b++) 
        {
            printf (" ");
        }
        printf ("*\n");
    }
	for (a = 1; a <= n; a++) 
	{
        printf ("*");
    }
	
	return 0;
}

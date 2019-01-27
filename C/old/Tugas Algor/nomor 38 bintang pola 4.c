#include<stdio.h>
int main()
{
	int a,b,c,n;
	scanf("%d", &n);
	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= n; b++)
		{
        if(n%2==0)
        {
            c=n/2;
            if((b%2!=0)||((a==c)&&(b<n))||(a==(c+1)&&(b<n))) printf ("*");
            else printf(" ");
        }
        else
        {
            c=(n+1)/2;
            if((b%2!=0)||(a==c)) printf ("*");
            else printf(" ");
        }
		}
		printf("\n");
    }


	return 0;
}

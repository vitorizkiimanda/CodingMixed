#include<stdio.h>
    int main()
    {
        int usia, ortu;
        float uang;
        scanf("%d %d %f",&usia,&ortu,&uang);
        if (uang<7.50)
	{
		printf("Insufficient fund\n");
		return 0;
	}
	if (usia<13)
	{
		if (ortu==1)
			printf ("Rate    : G, PG\n");
		else
			printf ("Rate    : G\n");
	}
	else if (usia<16)
	{
		if (ortu==1)
			printf ("Rate    : G, PG, R\n");
		else
			printf ("Rate    : G, PG\n");
	}
	else
		printf ("Rate    : G, PG, R\n");
	if (uang<10.50)
		printf ("Schedule: Matinee\n");
	else
		printf ("Schedule: Matinee, Evening\n");
        return 0;
    }

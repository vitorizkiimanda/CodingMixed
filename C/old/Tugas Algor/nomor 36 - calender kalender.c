#include<stdio.h>
int main()
{
    short int hari,start,j,k,count;
    scanf("%hd %hd",&hari,&start);
    for(count=1,k=1;count<=hari;)
    {
        for(j=1;j<=7;j++)
        {
            if(k<start)
            {
                printf("...");
                k++;
            }
            else if(count<=hari)
            {
                printf(".");
                if(count/10==0) printf(".");
                else printf("%hd", count/10);
                printf("%hd", count%10);
                count++;
            }
            else printf("...");
        }
        printf("\n");
    }
    return 0;
}

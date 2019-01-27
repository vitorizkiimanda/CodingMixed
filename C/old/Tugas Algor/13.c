#include<stdio.h>
    int main()
    {
        float p,q,kbesisam,kbakterisam;
        scanf("%f %f %f %f",&p,&q,&kbesisam,&kbakterisam);
        if((kbesisam<p)&&(kbakterisam<q)) printf("LAYAK\n");
        else printf("TIDAK LAYAK\n");
        return 0;
    }

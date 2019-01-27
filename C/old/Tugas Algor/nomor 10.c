#include<stdio.h>
#include<math.h>
    int main()
    {
        int gd,td;
        scanf("%d %d", &gd,&td);
        if((gd>=70)&&(gd<=110)) printf("KADAR GULA NORMAL %d\n", abs(gd-110));
        else printf("KADAR GULA TIDAK NORMAL %d\n", abs(gd-110));
        if((td>=100)&&(td<=140)) printf("TEKANAN DARAH NORMAL %d\n", abs(td-140));
        else printf("TEKANAN DARAH TIDAK NORMAL %d\n", abs(td-140));
        return 0;
    }

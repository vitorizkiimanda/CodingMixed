#include<stdio.h>
    int main()
    {
        int a,b,c,d;
        scanf("%d %d %d",&a,&b,&c);
        d=((a<b&&b<c)||(a<c&&c<b)?a:(b<c&&c<a)||(b<a&&a<c)?b:c);
        printf("%d\n",d);
        return 0;
    }

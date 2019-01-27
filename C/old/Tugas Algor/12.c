#include <stdio.h>
    int main()
    {
        int usia;
        scanf("%d",&usia);
        if(usia<16) printf("Too young to drive\n");
        else if(usia==16) printf("Better clear the road\n");
        else printf("You are getting pretty old\n");
        return 0;
    }

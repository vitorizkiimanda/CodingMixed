#include<bits/stdc++.h>
using namespace std;

int main(){

    int pixel;

    scanf("%d", &pixel);

    if(sqrt(pixel)*sqrt(pixel) == pixel)
    {
        int a,b;
        a=b=sqrt(pixel);
        printf("%d %d\n", a, b);
    }
    else
    {
        int a=sqrt(pixel),b=0;
        while((a*b) != pixel){
            if(pixel%a==0) b=pixel/a;
            else a--;
        }
        printf("%d %d\n", a, b);
    }

    return 0;
}

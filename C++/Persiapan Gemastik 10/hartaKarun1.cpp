#include<bits/stdc++.h>

using namespace std;

int main(){
    int x1,x2,y1,y2,x,y;



    scanf("%d %d %d %d %d %d", &x1,&y1,&x2,&y2, &x, &y);

    if(abs(y2-y1)%y!=0 || abs(x2-x1)%x!=0) printf("NO\n");
    //else if(abs(y2-y1)<y || abs(x2-x1)<x) printf("NO\n");
    else if((abs(y2-y1)/y)%2!=0 && (abs(x2-x1)/x)%2==0) printf("NO\n");
    else if((abs(y2-y1)/y)%2==0 && (abs(x2-x1)/x)%2!=0) printf("NO\n");



    else printf("YES\n");

    return 0;
}

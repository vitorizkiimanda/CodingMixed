#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    int data;
    int terbesar=-1;
    double total=0.0,temp;

    scanf("%d", &n);



    for(int i=0;i<n;i++)
    {
        scanf("%d", &data);
        if(terbesar<data) terbesar=data;
        total=total+data;
    }


    total/=2.0;
    temp=1.0/n;
    total+=temp;

    //printf("%lf\n", total);


    if(terbesar>total) printf("%d\n", terbesar);
    else printf("Vote invalid, return to Earth!\n");

    return 0;
}

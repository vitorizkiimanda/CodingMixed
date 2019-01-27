#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,c[1005],f[1005]={0};
    scanf("%d",&n);
    for (int i=1;i<=n; i++) scanf("%d",&c[i]);
    f[1]=c[1];
    f[2]=max(f[1]+c[2],c[2]);
    for (int j=3; j<=n;j++){
        f[j]=max(c[j]+f[j-1],c[j]+f[j-2]);
    }
    if (f[n]>0) printf("%d\n",f[n]);
    else
        printf("sayang sekali nak :(\n");
}

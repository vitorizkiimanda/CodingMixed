#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,k;
    scanf("%lld %lld", &n,&k);

    stack<long long int> choosen;
    long long int divider=1;
    while(1){
        if(n%divider==0){
            choosen.push(divider);
        }
        //printf("%lld\n", choosen.back());

        if(choosen.size()>=k || divider>(n/2+1) || k>n ) break;
        divider++;
    }
    if(choosen.size()<k and choosen.top()!=n) choosen.push(n);
    if(choosen.size()==k)
    {
        while(choosen.size()){
            printf("%lld\n", choosen.top());
            choosen.pop();
        }
        //printf("%lld\n", choosen.back());

    }
    else printf("-1\n");

    return 0;
}


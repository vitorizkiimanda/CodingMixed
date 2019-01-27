#include<bits/stdc++.h>
using namespace std;

int main(){

    string input;
    int counter=0;

    cin >> input;

    for(int i=0, j=input.size()-1; i < input.size()/2;i++,j--)
    {
        if(input[i]!=input[j]) counter++;
        printf("%c -- %c\n", input[i],input[j]);
    }

    if(counter>1) printf("NO\n");
    else printf("YES\n");

    return 0;
}

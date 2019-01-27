#include<bits/stdc++.h>
using namespace std;

int main (){
    int x;
    cin >> x;

    if(x==2) printf("%d", x=1);
    else{
        int suku,akar,mark,v,cek=0;
        akar=sqrt(x);
        for(suku=2, mark=0;suku<=akar;suku++)
        {
          cek = x%suku;
          if(cek==0) mark++;
        }
        if(mark) cout << "Bukan Prima"<<endl;
        else cout << "Prima" << endl;
    }
}

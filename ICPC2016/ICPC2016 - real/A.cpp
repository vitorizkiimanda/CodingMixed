#include <bits/stdc++.h>
using namespace std;
int main()
{
    string kata1, kata2, kondisi;
    int c=0,t,kata;
    cin>>t;
    for(int v=1;v<=t;v++)
    {
     cin>>kata1>>kata2;
     printf("Case #%d: ",v);
        if(kata1==kata2)
        {
            cout<<"YES\n";
            break;
        }
        else if(kata1.length()>kata2.length()){
            cout<<"NO\n";
            break;
        }
        else{
            for(int devy=0;devy<kata1.length();devy++)
                for(int hazim=0;hazim<kata2.length();hazim++)
            {
                if(kata1[devy]==kata2[hazim])
                {
                    kata=hazim;
                    break;
                }
            }
            for(int i=kata; i<kata2.length(); i++){
                if(kata1[i]==kata2[i]) c++;
                else break;
            }
        if(kata1.length()==c++) cout<<"YES\n"<<endl;
        else cout<<"NO\n"<<endl;
        }
    }
 
    return 0;
}

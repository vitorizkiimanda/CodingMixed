#include <bits/stdc++.h>
using namespace std;

int main() {

    string input;
    vector<char> result;
    getline(cin,input);

    if(input.length()==1){
        cout << input << endl;
    }

    else {
        for(int i=0;i<input.length();i++){
            if(input[i]=='+' or input[i]==' ' or input[i]=='(' or input[i]==')' or input[i]=='-' or input[i]=='*' or input[i]=='?' or input[i]=='.' or input[i]=='/' )
            {
                input.erase(i,1);
                i--;
            }
            if(input[i]=='0' and i>1){
                input.erase(i,1);
                input.insert(i,"62");
            }
            if(input[i]=='0' and i<1){
                input.erase(i,1);
                input.insert(i,"62");
            }

        }


        cout << input <<endl;
    }


    return 0;
}

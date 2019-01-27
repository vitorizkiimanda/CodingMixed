#include <bits/stdc++.h>
using namespace std;

int main() {

    string input1,input2;
    vector<char> result;

    cin>>input1>>input2;

    for(int i=0;i<input1.length();i++){
        bool found=false;
        for(int j=0 ; j<input2.length();j++){
            if(input1[i]==input2[j]) found = true;
        }
        if(!found) result.push_back(input1[i]);
    }

    for(int i=0;i<input2.length();i++){
        bool found=false;
        for(int j=0 ; j<input1.length();j++){
            if(input2[i]==input1[j]) found = true;
        }
        if(!found) result.push_back(input2[i]);
    }

    for(int i=0;i<result.size();i++){
        cout << result[i];
        if(i==result.size()-1) cout<<endl;
        else cout <<',';
    }

    return 0;
}


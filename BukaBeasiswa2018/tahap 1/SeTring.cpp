#include<bits/stdc++.h>
using namespace std;

int main(){
    string word;
    int rotation, counter;

    cin >> word;
    cin >> rotation;

    for(int i = 0 ; i<word.length(); i++){
        counter = 0;
        while(counter<rotation){
            word[i]++;
            int temp = word[i];
            if(temp >122) word[i]='a';
            counter++;
        }
    }
    cout << word << endl;

}

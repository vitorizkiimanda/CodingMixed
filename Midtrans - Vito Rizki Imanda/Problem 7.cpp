#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,result=0;
    string temp, quest;
    vector<string> names;

    cout << "How many names?"<<endl;
    cin >> n;

    cout << "input those names :"<<endl;
    for(int i = 0; i<n ;i++){
        cin >> temp;
        names.push_back(temp);
    }

    cout << "Find : "<<endl;
    cin >> quest;

    for(int i = 0; i<names.size();i++){
        if(quest == names[i].substr(0,quest.length())) result++;
    }

    cout << result << endl;



    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> List;
    list<int>::iterator it;
    int n;

    cin >> n;

    while(n>0){
        if(n%2==0){
            it = List.begin();
            List.insert(it, 0);
        }
        else {
            it = List.begin();
            List.insert(it, 1);
        }
        n /= 2;
    }
    for (auto v : List)
        cout << v;
    cout << endl;
    return 0;
}

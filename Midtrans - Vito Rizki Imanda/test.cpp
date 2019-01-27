#include <bits/stdc++.h>
using namespace std;

int main() {

    string input ;

    getline(cin, input);

    cout << input.find('A');
    input = input.erase(0,input.find('A'));
    input = input.erase(0,1);
    input = input.erase(0,1);
    cout << input.substr(0,2);

    input = input.erase(0,3);
    cout << input.substr(0,2);


    return 0;
}



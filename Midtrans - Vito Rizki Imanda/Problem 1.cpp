#include <bits/stdc++.h>
using namespace std;

int main() {

    string input1, input2;
    float result=0;

    getline(cin, input1);
    getline(cin, input2);

    for(int i=0;i<input1.length();i++)
        input1[i] = tolower(input1[i]);

    for(int i=0;i<input2.length();i++)
        input2[i] = tolower(input2[i]);

    if(input1 == input2) cout<<"Similarity : 100% "<<endl;

    else {
        for(int i=0;i<input1.length();i++)
            if(input1[i]==input2[i]) result++;

        printf("Similarity: %.2f\%\n", (result/input1.length())*100);

    }




    return 0;
}


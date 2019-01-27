#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    string quest;

    scanf("%d", &n);
    string input[n];
    string temp;

    cin >> quest;

    for(int i=0;i<n;i++)
    {
        cin >> input[i];
    }

    for(int i=0;i<n;i++)
    {
        if((input[i].find("change_")==0) && (quest=="snake_case")) cout << "NOT MODIFIED "<< input[i] << endl;
        else if((input[i].find("change")==0) && (input[i].find('_')==4294967295) && (quest=="camelCase")) cout << "NOT MODIFIED " << input[i] << endl;
        else if((input[i].find("dontChange")==0) || (input[i].find("dont_change")==0)) cout << "NOT MODIFIED " << input[i] << endl;
        else {
            if(quest=="snake_case")
            {
                cout << "MODIFIED INTO ";
                for(int j=0;j<input[i].size();j++)
                {
                    if(j<6) printf("%c", input[i][j]);
                    else if(isupper(input[i][j])) printf("_%c", tolower(input[i][j]));
                    else printf("%c", input[i][j]);
                }
                cout << endl;
            }
            else
            {
                cout << "MODIFIED INTO ";
                for(int j=0;j<input[i].size();j++)
                {
                    if(j<6) printf("%c", input[i][j]);
                    else if(input[i][j]=='_') printf("%c", toupper(input[i][++j]));
                    else printf("%c", input[i][j]);
                }
                cout << endl;
            }
        }
    }



    return 0;
}

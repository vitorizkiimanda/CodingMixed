#include<bits/stdc++.h>
#define SIZE 1000000
using namespace std;
int main()
{
    long long int N, tinggi[SIZE], urut[SIZE];
    map<int,int> data;
    cin >> N;
    for(int i=0;i<N;i++)
        cin >> tinggi[i];
 
    sort(tinggi, tinggi+N);
     
    int j=0;
    for(int i=0;i<N;i++)
    {
        if(data[tinggi[i]]==0)
        {
            urut[j] = tinggi[i];
            j++;
        }
        ++data[tinggi[i]];
    }
 
    for(int i=0;i<j;i++)
        cout << urut[i] <<" "<< data[urut[i]]<<endl;    
     
    return 0;
}

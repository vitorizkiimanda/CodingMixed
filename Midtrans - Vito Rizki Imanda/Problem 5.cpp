#include <bits/stdc++.h>
using namespace std;

int main() {

    string input ;
    int time[10000][10000], result=0;

    int i=0,j=0;
    while(getline(cin, input)){
        input = input.erase(0,input.find('A'));
        input = input.erase(0,1);
        input = input.erase(0,1);

        //Arrival hour into seconds
        time[i,j] = input.substr(0,2)*3600;

        //erase A hour
        input = input.erase(0,3)

        //Arrival seconds
        time[i,j] += input.substr(0,2)*60;

        //Departure

        j=1;

        input = input.erase(0,input.find('D'));
        input = input.erase(0,1);
        input = input.erase(0,1);

        //Departure hour into seconds
        time[i,j] = input.substr(0,2)*3600;

        //erase D hour
        input = input.erase(0,3)

        //Departure seconds
        time[i,j] += input.substr(0,2)*60;

        //reset j for next Arrival and increment i
        i++;
        j=0;
    }

    //store amount of buses
    int n = i;

    for (int i = 0 ; i<86400 ;i++){
        for(int j = 0; j< n ; j++){
            if(i>= time[j,0] and i<= time[j,1]) result++;
        }
    }

    cout << "Max Number of bus : "<<result<<endl;

    return 0;
}


//Big O => O(n) = n*n = n^2

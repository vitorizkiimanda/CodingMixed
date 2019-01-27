#include <bits/stdc++.h>
using namespace std;

struct person {
    string name;
    int orig;
    int dest;
};

bool acompare(person lhs, person rhs) { return lhs.orig < rhs.orig; }
bool acompare2(person lhs, person rhs) { return lhs.dest < rhs.dest; }


int main() {
    person p[7];
    int cost = 8 + 10;

    p[0].name = "p0";
    p[0].orig = 1;
    p[0].dest = 1;

    p[1].name = "p1";
    p[1].orig = 1;
    p[1].dest = 5;

    p[2].name = "p2";
    p[2].orig = 2;
    p[2].dest = 3;

    p[3].name = "p3";
    p[3].orig = 2;
    p[3].dest = 4;

    p[4].name = "p4";
    p[4].orig = 3;
    p[4].dest = 4;

    p[5].name = "p5";
    p[5].orig = 3;
    p[5].dest = 1;

    p[6].name = "p6";
    p[6].orig = 5;
    p[6].dest = 1;

    sort(p, p+7, acompare);

    cout << "embark from :" <<endl;
    for(int i=1;i<7;i++)
        cout << p[i].name <<endl;


    for(int i=1;i<7;i++)
    {
        if(p[i].dest - p[i].orig < 0){
          p[i].dest +=5;
        }
        else
            p[i].dest += p[i].orig;
    }



    sort(p, p+7, acompare2);
    cout << endl << "disembark from :" <<endl;
    for(int i=1;i<7;i++)
        cout << p[i].name <<endl;

    cout << endl << "cost :" << cost  <<endl;



    return 0;
}


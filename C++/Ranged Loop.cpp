#include<iostream>
#include<string>
#define nama
using namespace std;

int main()
{
	string nama {"Vito!"};
	for(char x : nama)
		cout<<"["<<x<<"]";
	cout<<"\n";
	return 0;
}

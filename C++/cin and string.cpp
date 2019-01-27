#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
	string mystring;
	int x;
	cout<< "Who are you? ";
	getline(cin, mystring);
	cout<<"Oh Hai "<<mystring<<".\n";
	cout<<"Have you eaten? "<< endl;
	cout<<"\t 1= yes , 0=no"<<endl;
	cout<<"Answer : "<<endl;
	getline(cin, mystring);
	stringstream(mystring)>>x;
	if(x==0) cout<<"Makanlah";
	else cout << "alhamdulillah";
	
	//cout<<"haha!";
	
	return 0;
}

#include<iostream>
#define NEWLINE '\n'
using namespace std;

int main()
{
	int a,b,c,d;
	cin >> a,b;// scan
	
	c= (a>b) ? 10 : 9;
	
	d=(b=-10 , b+1);
	cout<<c<<endl; // print, endl=end of Line, newline
//	cout<<NEWLINE;
	cout<<d;
	return 0;
}

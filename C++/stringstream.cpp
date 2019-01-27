#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	float harga=0;
	int jumlah=0;
	string mystring;
	
	cout<<"masukan harga : ";
	getline(cin, mystring);
	stringstream(mystring)>> harga;
	cout<<"masukan jumlah : ";
	getline(cin, mystring);
	stringstream(mystring)>>jumlah;
	cout<<"Total : "<<harga*jumlah<<endl;
	return 0;
}

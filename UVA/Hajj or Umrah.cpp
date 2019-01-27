#include<iostream>
#include<string>
using namespace std;

int main()
{
	string haji;
	int counter=1;
	cin >> haji;
	while(haji[0] !='*')
	{
		if(haji=="Hajj")
		{
			cout <<"Case "<<counter<<" : Hajj-e-Akbar"<<endl;
			counter++;
		}	
		if(haji=="Umrah")
		{
			cout <<"Case "<<counter<<" : Hajj-e-Asghar"<<endl;
			counter++;
		}
		cin >> haji;
	}
	return 0;
	
}

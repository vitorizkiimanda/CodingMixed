#include<bits/stdc++.h>
using namespace std;
int main()
{
	string kalimat;
	getline(cin, kalimat);
	for(int i=0;i < kalimat.length();i++)
	{
		if(kalimat[i]=='a') kalimat[i]='4';
		if(kalimat[i]=='i') kalimat[i]='1';
		if(kalimat[i]=='o') kalimat[i]='0';
		if(kalimat[i]=='s') kalimat[i]='5';
		if(kalimat[i]=='e') kalimat[i]='3';
	}
	cout << kalimat << endl;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2,s3,s4;
	int temp;
	
	cin >> s1 >> s2 >> s3 >> s4;
	
	temp = s1.find(s2);
	s1.erase(temp,s2.length());
	
	temp = s1.find(s3);
	s1.insert(temp+s3.length(),s4);
	
	cout << s1 << endl;
	
	return 0;
}

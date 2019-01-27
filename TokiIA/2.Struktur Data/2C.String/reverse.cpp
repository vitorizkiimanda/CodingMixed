#include<bits/stdc++.h>
using namespace std;

int main()
{
	string input;
	
	getline(cin,input);
	
	for(int i=input.length()-1;i>=0;i--)
		printf("%c", input[i]);
		
	printf("\n");
	return 0;
}

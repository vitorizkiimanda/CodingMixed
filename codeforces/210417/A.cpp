#include<bits/stdc++.h>

using namespace std;

int main()
{
	string input;
	queue<char> depan;
	stack<char> belakang;
	
	int n=0;
	
	getline(cin,input);
	
	if(input.size()%2 == 0)
	{
		for(int i=0, j=(input.size()/2)-1;i<=input.size()/2,j<input.size();i++,j++)
		{
			depan.push(input[i]);
			belakang.push(input[j]);
		}
	}
	else
	{
		for(int i=0, j=(input.size()/2);i<=input.size()/2,j<input.size();i++,j++)
		{
			depan.push(input[i]);
			belakang.push(input[j]);
		}
	}
	for(int i=0;i<=depan.size();i++)
	{
		/*cout<<depan.front()<< endl;
		cout<<belakang.top()<<endl<< endl;
		*/
		if(depan.front()!=belakang.top()) n++;
		depan.pop();
		belakang.pop();
	}
	
	if(n>1) printf("NO\n");
	else printf("YES\n");
	
	return 0; 
}

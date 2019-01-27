#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,keduanya=0, A=0,B=0;
	cin >> n >> a >> b;
	n+=1;
	while(--n)
	{
		while((n%a==0)&&(n%b==0))
		{
			keduanya++;
			break;	
		} 
    	while((n%a==0)&&(n%b!=0))
		{
			A++;
			break;	
		} 
        while((n%a!=0)&&(n%b==0))
		{
			B++;
			break;	
		}
	
		
	}
	cout << A <<" "<< B <<" "<< keduanya << endl;
	return 0;
}

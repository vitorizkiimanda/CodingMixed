#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,ukuran,status,status2;
	string input[10001];
	
	scanf("%d", &n);
	
	for(int i=0;i<n;i++)
		cin >> input[i];
		
	for(int i=0;i<n;i++)
	{
		ukuran = input[i].length();
		status=0; status2=0;
		for(int j=ukuran-1;j>=0;j--)
		{
			if(status==0 and input[i][j]!='0')
			{
				printf("%c", input[i][j]);
				status++;
				status2++;	
			}
			else if(status==1 or j==0)
			{
				printf("%c", input[i][j]);
				status2++;
			}
			if(j==0 and status2!=0)printf("\n");
		}
				
	}
		
	
		
	
	return 0;
}

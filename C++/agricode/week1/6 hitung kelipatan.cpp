#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,operasi=0;
	cin >> n;
	bool deret[1000000];	
	
	memset(deret, true , sizeof(deret)); // atau (deret, true, 1000000); 
	
 	for(int i = 2; i < n; i++)
	 {
        if(i <= sqrt(n) && deret[i] == true)
		{
			operasi++;
            for(int j = i*i; j < n; j++)
				if(j % i == 0)
                    deret[j] = false;
            
        }
    }
		cout << operasi << endl;
	
	return 0;
}

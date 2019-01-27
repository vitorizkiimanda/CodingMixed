#include<bits/stdc++.h>
using namespace std;

void Normal(int n)
{
	int counter=0;
	bool deret[100001];	
	
	memset(deret, true , sizeof(deret));
	
 	for(int i = 2; i <= n; i++)
	 {
        if(i <= sqrt(n) && deret[i] == true)
		{
            for(int j = i*i; j <= n; j++)
				if(j % i == 0)
                    deret[j] = false;
        }
    }
    for(int i =2;i <= n;i++)
    	if(deret[i]==true) counter++;
	printf("%d\n", counter);	
}

void NumDiv(int n)
{
	int jumlah=0;
    int i, sementara=0,x;
    
   	for(i=1; i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
			    sementara = n/i;
                if(sementara==i)
                {
                    jumlah = jumlah + 1;
                }
                else
                {
           	        jumlah = jumlah + 2;
                }
    	    }
        }
        printf("%d\n", jumlah);
        sementara=0;
        jumlah =0;
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

void Euler(unsigned int n)
{
    unsigned int result = 1;
    for (int i=2; i < n; i++)
        if (gcd(i, n) == 1)
            result++;
    printf("%u\n", result);
}

int main()
{
	int i,t, n[101];
	string perintah[101];
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		cin >> perintah[i] >> n[i];
		
		if(perintah[i] == "SieveNormal()") Normal(n[i]);
		else if(perintah[i] == "SieveNumDiv()") NumDiv(n[i]);
		else if(perintah[i] == "EulerTotient()") Euler(n[i]);
	}
	return 0;
}
